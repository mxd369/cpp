all: cpp_stream_number1_introductory

cpp_stream_number1_introductory: cpp_stream_number1_introductory.o
	g++ -o cpp_stream_number1_introductory cpp_stream_number1_introductory.o

cpp_stream_number1_introductory.o: cpp_stream_number1_introductory.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c cpp_stream_number1_introductory.cpp

cpp_stream_number6_string-stream: cpp_stream_number6_string-stream.o
	g++ -o cpp_stream_number6_string-stream cpp_stream_number6_string-stream.o

cpp_stream_number6_string-stream.o: cpp_stream_number6_string-stream.o
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c cpp_stream_number6_string-stream.cpp

clean:
	rm -f cpp_stream_number1_introductory
	rm -f cpp_stream_number1_introductory.o
	rm -f cpp_stream_number6_string-stream
	rm -f cpp_stream_number6_string-stream.o