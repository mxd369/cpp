all: Main

Main: Main.o
	g++ -lncurses -o Main Main.o

Main.o: Main.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c Main.cpp

clean:
	rm -f Main
	rm -f Main.o