all: lab07 lab07nofunction lab07nofunctionClean readplusNCurses cobbledInternet0 cobbledInternet1

lab07: lab07.o
	g++ -lncurses -o lab07 lab07.o

lab07.o: lab07.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c lab07.cpp

lab07nofunction: lab07nofunction.o
	g++ -lncurses -o lab07nofunction lab07nofunction.o

lab07nofunction.o: lab07nofunction.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c lab07nofunction.cpp

lab07nofunctionClean: lab07nofunctionClean.o
	g++ -lncurses -o lab07nofunctionClean lab07nofunctionClean.o

lab07nofunctionClean.o: lab07nofunctionClean.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c lab07nofunctionClean.cpp

readplusNCurses: readplusNCurses.o
	g++ -lncurses -o readplusNCurses readplusNCurses.o

readplusNCurses.o: readplusNCurses.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c readplusNCurses.cpp

cobbledInternet0: cobbledInternet0.o
	g++ -lncurses -o cobbledInternet0 cobbledInternet0.o

cobbledInternet0.o: cobbledInternet0.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c cobbledInternet0.cpp

cobbledInternet1: cobbledInternet1.o
	g++ -lncurses -o cobbledInternet1 cobbledInternet1.o

cobbledInternet1.o: cobbledInternet1.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors  -lncurses -c cobbledInternet1.cpp

clean:
	rm -f lab07
	rm -f lab07.o
	rm -f lab07nofunction
	rm -f lab07nofunction.o
	rm -f readplusNCurses
	rm -f readplusNCurses.o
	rm -f lab07nofunctionClean
	rm -f lab07nofunctionClean.o
	rm -f cobbledInternet0
	rm -f cobbledInternet0.o
	rm -f cobbledInternet1
	rm -f cobbledInternet1.o