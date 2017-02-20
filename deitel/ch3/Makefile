all: AccountTest ch3_fig_3_1_AccountTest ch3_exercise_9_AccountTest

AccountTest: AccountTest.o
	g++ -o AccountTest AccountTest.o

AccountTest.o: AccountTest.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c AccountTest.cpp

ch3_fig_3_1_AccountTest: ch3_fig_3_1_AccountTest.o
	g++ -o ch3_fig_3_1_AccountTest ch3_fig_3_1_AccountTest.o

ch3_fig_3_1_AccountTest.o: ch3_fig_3_1_AccountTest.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c ch3_fig_3_1_AccountTest.cpp

ch3_fig_3_1_AccountTest: ch3_fig_3_1_AccountTest.o
	g++ -o ch3_fig_3_1_AccountTest ch3_fig_3_1_AccountTest.o

ch3_fig_3_1_AccountTest.o: ch3_fig_3_1_AccountTest.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c ch3_fig_3_1_AccountTest.cpp

ch3_exercise_9_AccountTest: ch3_exercise_9_AccountTest.o
	g++ -o ch3_exercise_9_AccountTest ch3_exercise_9_AccountTest.o

ch3_exercise_9_AccountTest.o: ch3_exercise_9_AccountTest.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c ch3_exercise_9_AccountTest.cpp

clean:
	rm -f AccountTest
	rm -f AccountTest.o
	rm -f ch3_fig_3_1_AccountTest
	rm -f ch3_fig_3_1_AccountTest.o
	rm -f ch3_exercise_9_AccountTest
	rm -f ch3_exercise_9_AccountTest.o