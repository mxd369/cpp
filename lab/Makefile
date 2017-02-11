all: exclusive

exclusive: exclusive.o
	g++ -o exclusive exclusive.o

exclusive.o: exclusive.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c exclusive.cpp

clean:
	rm -f exclusive
	rm -f exclusive.o
