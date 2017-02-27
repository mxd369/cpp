CC = g++
DEBUG = -g -O0 -pedantic-errors
CFLAGS = -Wall -std=c++11 -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: main

main: main.o Rational.o
	$(CC) $(LFLAGS) -o main main.o Rational.o

main.o: main.cpp Rational.h
	$(CC) $(CFLAGS) main.cpp

Rational.o: main.cpp Rational.h
	$(CC) $(CFLAGS) main.cpp

.PHONY: clean

clean:
	rm -rf *.o
	rm -rf main
