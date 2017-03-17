all: goodbye

goodbye: goodbye.o
	g++ -lncurses -o goodbye goodbye.o

goodbye.o: goodbye.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c goodbye.cpp

clean:
	rm -f goodbye
	rm -f goodbye.o