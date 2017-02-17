FLAGS = -Wall -O0 -g -std=c++14 -pedantic-errors

.PHONY: all clean

all: main

main: main.o GradeBook.o
	g++ $(FLAGS) -o main main.o GradeBook.o

main.o: main.cpp
	g++ $(FLAGS) -c main.cpp

GradeBook.o: GradeBook.cpp GradeBook.h
	g++ $(FLAGS) -c GradeBook.cpp

clean:
	rm -f main
	rm -f *.o
