// Mainframe macro generated from application: /home/tatsuya/root/v5.34.07/bin/root.exe
// By ROOT version 5.34/07 on 2014-09-01 15:08:14

#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif
#ifndef ROOT_TGMdiDecorFrame
#include "TGMdiDecorFrame.h"
#endif
#ifndef ROOT_TG3DLine
#include "TG3DLine.h"
#endif
#ifndef ROOT_TGMdiFrame
#include "TGMdiFrame.h"
#endif
#ifndef ROOT_TGMdiMainFrame
#include "TGMdiMainFrame.h"
#endif
#ifndef ROOT_TGMdiMenu
#include "TGMdiMenu.h"
#endif
#ifndef ROOT_TGColorDialog
#include "TGColorDialog.h"
#endif
#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif
#ifndef ROOT_TGNumberEntry
#include "TGNumberEntry.h"
#endif
#ifndef ROOT_TGScrollBar
#include "TGScrollBar.h"
#endif
#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif
#ifndef ROOT_TGuiBldHintsEditor
#include "TGuiBldHintsEditor.h"
#endif
#ifndef ROOT_TGuiBldNameFrame
#include "TGuiBldNameFrame.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGFileDialog
#include "TGFileDialog.h"
#endif
#ifndef ROOT_TGShutter
#include "TGShutter.h"
#endif
#ifndef ROOT_TGButtonGroup
#include "TGButtonGroup.h"
#endif
#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif
#ifndef ROOT_TGFSContainer
#include "TGFSContainer.h"
#endif
#ifndef ROOT_TGFontDialog
#include "TGFontDialog.h"
#endif
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGTextEdit
#include "TGTextEdit.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TGFSComboBox
#include "TGFSComboBox.h"
#endif
#ifndef ROOT_TGLabel
#include "TGLabel.h"
#endif
#ifndef ROOT_TGMsgBox
#include "TGMsgBox.h"
#endif
#ifndef ROOT_TRootGuiBuilder
#include "TRootGuiBuilder.h"
#endif
#ifndef ROOT_TGTab
#include "TGTab.h"
#endif
#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGStatusBar
#include "TGStatusBar.h"
#endif
#ifndef ROOT_TGView
#include "TGView.h"
#endif
#ifndef ROOT_TGuiBldGeometryFrame
#include "TGuiBldGeometryFrame.h"
#endif
#ifndef ROOT_TGToolBar
#include "TGToolBar.h"
#endif
#ifndef ROOT_TRootEmbeddedCanvas
#include "TRootEmbeddedCanvas.h"
#endif
#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TGuiBldDragManager
#include "TGuiBldDragManager.h"
#endif
#ifndef ROOT_TGObject
#include "TGObject.h"
#endif

#include "Riostream.h"
#include <stdlib.h>
#include <string>
//#include <TCanvas.h>
#include <TGraph.h>
#include <TROOT.h>
#include <TApplication.h>
#include <TGClient.h>
#include <TGraph.h>
#include <TAxis.h>
#include <TStyle.h>
#include <TRootEmbeddedCanvas.h>

#include "maikodev.h"

MainFrame::MainFrame(){

   // main frame
   TGMainFrame *fMainFrame860 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrame860->SetName("fMainFrame860");
   fMainFrame860->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1035 = new TGCompositeFrame(fMainFrame860,1221,766,kVerticalFrame);
   fMainFrame1035->SetName("fMainFrame1035");
   fMainFrame1035->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1209 = new TGCompositeFrame(fMainFrame1035,1095,770,kVerticalFrame);
   fMainFrame1209->SetName("fMainFrame1209");
   fMainFrame1209->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame862 = new TGCompositeFrame(fMainFrame1209,1083,771,kVerticalFrame);
   fMainFrame862->SetName("fMainFrame862");
   fMainFrame862->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1790 = new TGCompositeFrame(fMainFrame862,1039,809,kVerticalFrame | kRaisedFrame);
   fMainFrame1790->SetName("fMainFrame1790");
   fMainFrame1790->SetLayoutBroken(kTRUE);

   // tab widget
   TGTab *fTab666 = new TGTab(fMainFrame1790,1144,791);

   // container of "Pressure"
   TGCompositeFrame *fCompositeFrame669;
   fCompositeFrame669 = fTab666->AddTab("Pressure");
   fCompositeFrame669->SetLayoutManager(new TGVerticalLayout(fCompositeFrame669));
   fCompositeFrame669->SetLayoutBroken(kTRUE);

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas670 = new TRootEmbeddedCanvas(0,fCompositeFrame669,632,632);
   Int_t wfRootEmbeddedCanvas670 = fRootEmbeddedCanvas670->GetCanvasWindowId();
   //   TCanvas *c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas670);
   c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas670);
   fRootEmbeddedCanvas670->AdoptCanvas(c123);
   fCompositeFrame669->AddFrame(fRootEmbeddedCanvas670, new TGLayoutHints(kLHintsNormal));
   fRootEmbeddedCanvas670->MoveResize(0,0,632,632);

   // horizontal frame
   TGHorizontalFrame *fHorizontalFrame683 = new TGHorizontalFrame(fCompositeFrame669,1056,80,kHorizontalFrame);
   fHorizontalFrame683->SetLayoutBroken(kTRUE);

   TGFont *ufont;         // will reflect user font changes
   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   TGGC   *uGC;           // will reflect user GC changes


   // graphics context changes
   GCValues_t valEntry684;
   valEntry684.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry684.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry684.fBackground);
   valEntry684.fFillStyle = kFillSolid;
   valEntry684.fFont = ufont->GetFontHandle();
   valEntry684.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry684, kTRUE);


   //   TGTextEntry *fTextEntry684 = new TGTextEntry(fHorizontalFrame683, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry684 = new TGTextEntry(fHorizontalFrame683, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry684->SetMaxLength(4096);
   fTextEntry684->SetAlignment(kTextLeft);
   fTextEntry684->SetText("RI1C2250");
   fTextEntry684->Resize(100,fTextEntry684->GetDefaultHeight());
   fTextEntry684->SetToolTipText("enter the printer name");
   fHorizontalFrame683->AddFrame(fTextEntry684, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry684->MoveResize(56,30,100,25);


   TGLabel *fLabel685 = new TGLabel(fHorizontalFrame683,"Printer Name");
   fLabel685->SetTextJustify(36);
   fLabel685->SetMargins(0,0,0,0);
   fLabel685->SetWrapLength(-1);
   fHorizontalFrame683->AddFrame(fLabel685, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel685->MoveResize(55,11,100,18);


   /* Print button*/
   TGTextButton *fTextButton686 = new TGTextButton(fHorizontalFrame683,"&Print");
   fTextButton686->SetTextJustify(36);
   fTextButton686->SetMargins(0,0,0,0);
   fTextButton686->SetWrapLength(-1);
   fTextButton686->Resize(99,24);
   fTextButton686->SetToolTipText("Push to print the graph");
   fHorizontalFrame683->AddFrame(fTextButton686, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton686->MoveResize(416,30,99,24);
   fTextButton686->Connect("Clicked()", "MainFrame", this, "DoPrint()");

   /* Exit button */
   TGTextButton *fTextButton687 = new TGTextButton(fHorizontalFrame683,"&Exit");
   fTextButton687->SetTextJustify(36);
   fTextButton687->SetMargins(0,0,0,0);
   fTextButton687->SetWrapLength(-1);
   fTextButton687->Resize(92,24);
   fTextButton687->SetToolTipText("Exit and go to KFC!!");
   fTextButton687->SetCommand("gApplication->Terminate()");
   fHorizontalFrame683->AddFrame(fTextButton687, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton687->MoveResize(922,30,92,24);

   fCompositeFrame669->AddFrame(fHorizontalFrame683, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fHorizontalFrame683->MoveResize(8,648,1056,80);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry690;
   valEntry690.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry690.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry690.fBackground);
   valEntry690.fFillStyle = kFillSolid;
   valEntry690.fFont = ufont->GetFontHandle();
   valEntry690.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry690, kTRUE);


   // Record file name
   //   TGTextEntry *fTextEntry690 = new TGTextEntry(fCompositeFrame669, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry690 = new TGTextEntry(fCompositeFrame669, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry690->SetMaxLength(4096);
   fTextEntry690->SetAlignment(kTextLeft);
   fTextEntry690->SetText("/home/pi/maikodev/data/20140903.dat");
   fTextEntry690->Resize(286,fTextEntry690->GetDefaultHeight());
   fCompositeFrame669->AddFrame(fTextEntry690, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry690->MoveResize(650,80,286,22);


   TGLabel *fLabel691 = new TGLabel(fCompositeFrame669,"Record file name");
   fLabel691->SetTextJustify(36);
   fLabel691->SetMargins(0,0,0,0);
   fLabel691->SetWrapLength(-1);
   fCompositeFrame669->AddFrame(fLabel691, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel691->MoveResize(648,61,120,18);


   TGTextButton *fTextButton692 = new TGTextButton(fCompositeFrame669,"Start");
   fTextButton692->SetTextJustify(36);
   fTextButton692->SetMargins(0,0,0,0);
   fTextButton692->SetWrapLength(-1);
   fTextButton692->Resize(57,24);
   fCompositeFrame669->AddFrame(fTextButton692, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton692->MoveResize(960,80,57,24);

   //   fTextButton692->SetCommand("Record()");
   fTextButton692->Connect("Clicked()", "MainFrame", this, "Record()");

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry693;
   valEntry693.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry693.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry693.fBackground);
   valEntry693.fFillStyle = kFillSolid;
   valEntry693.fFont = ufont->GetFontHandle();
   valEntry693.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry693, kTRUE);


   // Plot file name input
   //   TGTextEntry *fTextEntry693 = new TGTextEntry(fCompositeFrame669, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry693 = new TGTextEntry(fCompositeFrame669, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry693->SetMaxLength(4096);
   fTextEntry693->SetAlignment(kTextLeft);
   fTextEntry693->SetText("/home/pi/maikodev/data/20140903.dat");
   fTextEntry693->Resize(286,fTextEntry693->GetDefaultHeight());
   fCompositeFrame669->AddFrame(fTextEntry693, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry693->MoveResize(650,350,286,22);

   TGLabel *fLabel694 = new TGLabel(fCompositeFrame669,"Plot file name");
   fLabel694->SetTextJustify(36);
   fLabel694->SetMargins(0,0,0,0);
   fLabel694->SetWrapLength(-1);

   fCompositeFrame669->AddFrame(fLabel694, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel694->MoveResize(648,330,120,18);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valButton695;
   valButton695.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",valButton695.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton695.fBackground);
   valButton695.fFillStyle = kFillSolid;
   valButton695.fFont = ufont->GetFontHandle();
   valButton695.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton695, kTRUE);
   TGTextButton *fTextButton695 = new TGTextButton(fCompositeFrame669,"Plot",-1,uGC->GetGC());
   fTextButton695->SetTextJustify(36);
   fTextButton695->SetMargins(0,0,0,0);
   fTextButton695->SetWrapLength(-1);
   fTextButton695->Resize(57,24);
   fCompositeFrame669->AddFrame(fTextButton695, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton695->MoveResize(960,350,57,24);


   //   fTextButton695->SetCommand("DoPlot()");
   fTextButton695->Connect("Clicked()", "MainFrame", this, "DoPlot()");


   // container of "Iwaki"
   TGCompositeFrame *fCompositeFrame697;
   fCompositeFrame697 = fTab666->AddTab("Iwaki");
   fCompositeFrame697->SetLayoutManager(new TGVerticalLayout(fCompositeFrame697));


   // container of "hoge"
   TGCompositeFrame *fCompositeFrame699;
   fCompositeFrame699 = fTab666->AddTab("hoge");
   fCompositeFrame699->SetLayoutManager(new TGVerticalLayout(fCompositeFrame699));


   fTab666->SetTab(0);

   fTab666->Resize(fTab666->GetDefaultSize());
   fMainFrame1790->AddFrame(fTab666, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTab666->MoveResize(8,16,1144,791);

   fMainFrame862->AddFrame(fMainFrame1790, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1790->MoveResize(0,0,1039,809);

   fMainFrame1209->AddFrame(fMainFrame862, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame862->MoveResize(0,0,1083,771);

   fMainFrame1035->AddFrame(fMainFrame1209, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1209->MoveResize(0,0,1095,770);

   fMainFrame860->AddFrame(fMainFrame1035, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1035->MoveResize(0,0,1221,766);

   fMainFrame860->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrame860->MapSubwindows();

   fMainFrame860->Resize(fMainFrame860->GetDefaultSize());
   fMainFrame860->MapWindow();
   fMainFrame860->Resize(1198,768);
}

MainFrame::~MainFrame(){
  fMainFrame860->Cleanup();
  delete fMainFrame860;
}


void screen(){
  /* Popup the window */
  new MainFrame();
}



/* Main program*/
int main(int argc, char **argv)
{
  TApplication theApp("App", &argc,argv);
  screen();
  theApp.Run();
  return 0;
}  


void MainFrame::DoPrint(){
  const  char *printer_name;
  char pingcommand[256];
  char pricommand[256];
  int pri_result;

  printer_name = fTextEntry684->GetText();

  /* Check if the printer exist. */
  sprintf(pingcommand, "ping -q -c 1 %s > /dev/null", printer_name);
  pri_result=system(pingcommand);

  if(pri_result != 0){
    cout << "Printer connection error!!" << endl;
  }

  if(pri_result == 0){
    sprintf(pricommand, "lpr -P %s out.ps", printer_name);
    c123->SaveAs("out.ps");
    system(pricommand);
    //    system("rm -f out.ps");
  }
}



void MainFrame::Record(){
  int plc_result;
  const  char *recfile;
  char command[256];

  recfile = fTextEntry690->GetText();
  sprintf(command, "/home/pi/maikodev/program/socket %s &", recfile);

  /* Check if the PLC CPU exits. */
  plc_result=system("ping -q -c 1 172.16.205.94 > /dev/null");

  if(plc_result != 0){
    cout << "CPU connection error!!" << endl;
  }
  if(plc_result == 0){
    system(command);
    fTextEntry693->SetText(recfile);
  }
}

void MainFrame::DoPlot(){

  const  char *plotfile;
  plotfile = fTextEntry693->GetText();
  
  FILE *fp;
  if((fp = fopen(plotfile, "r")) == NULL){
    cout << "Plot file doesn't exist!!" << endl;
  }

  else{
    TGraph *g = new TGraph(plotfile);
    gStyle->SetTimeOffset(-788918400);
    //    gStyle->SetNdivisions(10);
    g->GetXaxis()->SetTimeDisplay(1);
    g->GetXaxis()->SetTimeFormat("%H:%M");
    g->GetYaxis()->SetTitle("pressure (hPa)");
    g->GetYaxis()->SetTitleOffset(1.5);
    g->SetLineWidth(2);
    g->SetMarkerStyle(21);
    g->SetMarkerColor(kBlue);
    g->SetMarkerSize(1);
    g->SetTitle("Pressure monitor");
    
    c123->SetGrid();
    c123->cd();
    g->Draw("AP");
    c123->Update();  
  }
}
