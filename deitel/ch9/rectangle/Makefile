CC = g++
DEBUG = -g -O0 -pedantic-errors
CFLAGS = -Wall -std=c++11 -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: main

main: main.o Rectangle.o
	$(CC) $(LFLAGS) -o main main.o Rectangle.o

main.o: main.cpp Rectangle.h
	$(CC) $(CFLAGS) main.cpp

Rectangle.o: main.cpp Rectangle.h
	$(CC) $(CFLAGS) main.cpp

.PHONY: clean

clean:
	rm -rf *.o
	rm -rf main
