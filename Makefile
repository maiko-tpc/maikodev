all: socket maikodev

socket: com.c
	gcc -o socket com.c

maikodev: maikodev.cxx maikodev.h
	rootcint -f Dict.cxx -c maikodev.h LinkDef.h
	g++ -o maikodev maikodev.cxx Dict.cxx `root-config --cflags --glibs`

clean:
	rm -f socket maikodev Dict.cxx Dict.h
