CC = g++
DEBUG = -g -Wall -O0 -pedantic-errors
CFLAGS = -std=c++14
LFLAGS = -std=c++14
COMPILE = $(CC) $(DEBUG) $(CFLAGS) -c
LINK = $(CC) $(DEBUG) $(LFLAGS) -o

exit: exit.o
	$(LINK) exit exit.o

exit.o:
	$(COMPILE) exit.cpp

run: exit
	./exit

clean:
	rm -rf exit
	rm -rf *.o