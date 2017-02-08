all: exclusive primesum armstrong

exclusive: exclusive.o
	g++ -o exclusive exclusive.o

exclusive.o: exclusive.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c exclusive.cpp

primesum: primesum.o
	g++ -o primesum primesum.o

primesum.o: primesum.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c primesum.cpp

armstrong: armstrong.o
	g++ -o armstrong armstrong.o

armstrong.o: armstrong.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c armstrong.cpp

clean:
	rm -f exclusive
	rm -f exclusive.o
	rm -f primesum
	rm -f primesum.o
	rm -f armstrong
	rm -f armstrong.o