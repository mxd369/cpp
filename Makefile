all: stringstream_example stringstream_example1 readuserinput_tester

stringstream_example: stringstream_example.o
	g++ -o stringstream_example stringstream_example.o

stringstream_example.o: stringstream_example.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c stringstream_example.cpp

stringstream_example1: stringstream_example1.o
	g++ -o stringstream_example1 stringstream_example1.o

stringstream_example1.o: stringstream_example.o
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c stringstream_example1.cpp

readuserinput_tester: readuserinput_tester.o
	g++ -o readuserinput_tester readuserinput_tester.o

readuserinput_tester.o: readuserinput_tester.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c readuserinput_tester.cpp

clean:
	rm -f stringstream_example
	rm -f stringstream_example.o
	rm -f stringstream_example1
	rm -f stringstream_example1.o
	rm -f readuserinput_tester
	rm -f readuserinput_tester.o