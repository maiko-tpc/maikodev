all: socket maikodev

socket: rec.c
	gcc -lm -o rec rec.c

maikodev: maikodev.cxx maikodev.h
	rootcint -f Dict.cxx -c maikodev.h LinkDef.h
	g++ -o maikodev maikodev.cxx Dict.cxx `root-config --cflags --glibs`

clean:
	rm -f socket maikodev Dict.cxx Dict.h
