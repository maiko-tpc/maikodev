#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char * argv[]){

  int sockfd ;
  int len ;
  int i;
  struct sockaddr_in address ;
  char command[256];
  int result ;
  int result2;
  int data_length;
  char data[256];
  char header[32];
  char buff[256];
  long buff2;
  char *endptr;
  long double ADC_val[8];
  long double pressure;
  char *outfile;

  if(argc != 2) exit(0);

  while(1){

    bzero((char*)&address, sizeof(address));
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    //  printf("id= %d \n", sockfd);
    address.sin_family = AF_INET ;
    address.sin_addr.s_addr =inet_addr("172.16.205.94");
    address.sin_port =htons(12289);
    len = sizeof(address);
    result = connect(sockfd, (struct sockaddr*)&address, len);
    //  printf("result= %d\n", result);
    
    if ( result == -1 ) {
      //    perror("oops: client");
    return 0;
    }
    
    //  send(sockfd, "01TSThogehoge\r\n", 256, 0); /* for test */
    
    /* Read ADC data (D00001 ~ D00008)*/ 
    send(sockfd, "01WRDD00001,09\r\n", 256, 0);
    data_length=recv(sockfd, &data, 256, 0);
    close(sockfd);
    
    //  printf("length= %d \n", data_length);
    //  printf("data= %s \n", data);
    
    strncpy(header, data, 4);
    //  strcat(header, "\0");
    //  printf("header= %s \n", header);
    
    /* Check if the header data is correct */
    if(strstr(header, "11OK") == NULL) exit(0);
    
    for(i=0; i<8; i++){
      ADC_val[i]= -10000;
      
      sprintf(buff, "0x%c%c%c%c", data[4*i+4], data[4*i+5],
	      data[4*i+6], data[4*i+7]);
      
      /* Convert hex string to dec integer */
      buff2= strtol(buff, &endptr, 16);
      ADC_val[i]= buff2;
      if(ADC_val[i]>10000) ADC_val[i]=ADC_val[i]-65535;
      pressure = 0.40/3.0*ADC_val[0];
      //    printf("ADC CH%d= %d \n", i, ADC_val[i]);
    }
    
    /* File output */
    outfile = argv[1];
    
    FILE *output;
    output = fopen(outfile, "a");
    if (output == NULL){
      printf("output file open error! \n");
      exit(1);
    }
    
    time_t timer;
    struct tm *local;
    timer = time(NULL);
    local = localtime(&timer);
    
    //  fprintf(output, "%4d/", local->tm_year + 1900);
    //  fprintf(output, "%2d/", local->tm_mon + 1);
    //  fprintf(output, "%2d ", local->tm_mday);
    //  fprintf(output, "%2d:", local->tm_hour);
    //  fprintf(output, "%2d:", local->tm_min);
    //  fprintf(output, "%2d   ", local->tm_sec);
    
    fprintf(output, "%d ", timer);
    
    fprintf(output, "%f \n", pressure);
    fclose(output);

    sleep(60);
  }
  return 0;
}
