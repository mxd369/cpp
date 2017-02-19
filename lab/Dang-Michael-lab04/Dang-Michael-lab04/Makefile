all: making_assumptions_1 making_assumptions_2_re-output making_assumptions_3 warmup_activity_1 warmup_activity_3 arrays_and_pointers_activity1 arrays_and_pointers_activity2

making_assumptions_1: making_assumptions_1.o
	g++ -o making_assumptions making_assumptions_1.o

making_assumptions_1.o: making_assumptions_1.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c making_assumptions_1.cpp

making_assumptions_2_re-output: making_assumptions_2_re-output.o
	g++ -o making_assumptions_2_re-output making_assumptions_2_re-output.o

making_assumptions_2_re-output.o: making_assumptions_2_re-output.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c making_assumptions_2_re-output.cpp

making_assumptions_3: making_assumptions_3.o
	g++ -o making_assumptions_3 making_assumptions_3.o

making_assumptions_3.o: making_assumptions_3.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c  making_assumptions_3.cpp

warmup_activity_1: warmup_activity_1.o
	g++ -o warmup_activity_1 warmup_activity_1.o

warmup_activity_1.o: warmup_activity_1.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c warmup_activity_1.cpp

warmup_activity_3: warmup_activity_3.o
	g++ -o warmup_activity_3 warmup_activity_3.o

warmup_activity_3.o: warmup_activity_3.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c warmup_activity_3.cpp

arrays_and_pointers_activity1: arrays_and_pointers_activity1.o
	g++ -o arrays_and_pointers_activity1 arrays_and_pointers_activity1.o

arrays_and_pointers_activity1.o: arrays_and_pointers_activity1.o
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c arrays_and_pointers_activity1.cpp

arrays_and_pointers_activity2: arrays_and_pointers_activity2.o
	g++ -o arrays_and_pointers_activity2 arrays_and_pointers_activity2.o

arrays_and_pointers_activity2.o: arrays_and_pointers_activity2.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c arrays_and_pointers_activity2.cpp

clean:
	rm -f making_assumptions_1
	rm -f making_assumptions_1.o
	rm -f making_assumptions_2_re-output
	rm -f making_assumptions_2_re-output.o
	rm -f making_assumptions_3
	rm -f making_assumptions_3.o
	rm -f warmup_activity_1
	rm -f warmup_activity_1.o
	rm -f warmup_activity_3
	rm -f warmup_activity_3.o
	rm -f arrays_and_pointers_activity1
	rm -f arrays_and_pointers_activity1.o
	rm -f arrays_and_pointers_activity2
	rm -f arrays_and_pointers_activity2.o
