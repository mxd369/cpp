all: ch2_exercise_2_16

ch2_exercise_2_16: ch2_exercise_2_16.o
	g++ -o ch2_exercise_2_16 ch2_exercise_2_16.o

ch2_exercise_2_16.o: ch2_exercise_2_16.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c ch2_exercise_2_16.cpp

clean:
	rm -f ch2_exercise_2_16
	rm -f ch2_exercise_2_16.o
