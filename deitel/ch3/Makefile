all: AccountTest ch3_fig_3_1_AccountTest ch3_exercise_9_AccountTest InvoiceTestSolution InvoiceTest

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

InvoiceTestSolution: InvoiceTestSolution.o
	g++ -o InvoiceTestSolution InvoiceTestSolution.o

InvoiceTestSolution.o: InvoiceTestSolution.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c InvoiceTestSolution.cpp

InvoiceTest: InvoiceTest.o
	g++ -o InvoiceTest InvoiceTest.o

InvoiceTest.o: InvoiceTest.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c InvoiceTest.cpp

clean:
	rm -f AccountTest
	rm -f AccountTest.o
	rm -f ch3_fig_3_1_AccountTest
	rm -f ch3_fig_3_1_AccountTest.o
	rm -f ch3_exercise_9_AccountTest
	rm -f ch3_exercise_9_AccountTest.o
	rm -f InvoiceTestSolution
	rm -f InvoiceTestSolution.o
	rm -f InvoiceTest
	rm -f InvoiceTest.o