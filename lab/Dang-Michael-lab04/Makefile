all: check_sizeof making_assumptions_1 making_assumptions_2 making_assumptions_2_re-output

check_sizeof: check_sizeof.o
	g++ -o check_sizeof check_sizeof.o

check_sizeof.o: check_sizeof.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c making_assumptions_1.cpp

making_assumptions_1: making_assumptions_1.o
	g++ -o check_sizeof making_assumptions_1.o

making_assumptions_1.o: making_assumptions_1.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c making_assumptions_1.cpp

making_assumptions_2: making_assumptions_2.o
	g++ -o making_assumptions_2 making_assumptions_2.o

making_assumptions_2.o: making_assumptions_2.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c making_assumptions_2.cpp

making_assumptions_2_re-output: making_assumptions_2_re-output.o
	g++ -o making_assumptions_2_re-output making_assumptions_2_re-output.o

making_assumptions_2.o_re-output: making_assumptions_2_re-output.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c making_assumptions_2_re-output.cpp

clean:
	rm -f check_sizeof
	rm -f check_sizeof.o
	rm -f making_assumptions_1
	rm -f making_assumptions_1.o
	rm -f making_assumptions_2
	rm -f making_assumptions_2.o
	rm -f making_assumptions_2_re-output
	rm -f making_assumptions_2_re-output.o