#all: 
	
#You need to include a Makefile. Your Makefile needs to compile and link separately.
#Make sure that your Matrix.cpp file compiles to Matrix.o.
#This is very important because we will be testing your submission by linking against your Matrix.o file. #The resulting executable should be called p1.
#Make sure that when you compile, you pass the following options to g++ in addition to the -c option:
#-Wall -std=c++14 -g -O0 -pedantic-errors




CC = g++
DEBUG = -g -O0 -pedantic-errors
CFLAGS = -Wall -std=c++11 -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: main

main: main.o GradeBook.o
	$(CC) $(LFLAGS) -o main main.o GradeBook.o

main.o: main.cpp GradeBook.h
	$(CC) $(CFLAGS) main.cpp

GradeBook.o: GradeBook.cpp GradeBook.h
	$(CC) $(CFLAGS) GradeBook.cpp

.PHONY: clean

clean:
	rm -rf *.o
	rm -rf main