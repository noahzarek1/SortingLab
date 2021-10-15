test: test.o
	./test.o
	#debug50 test.o
	rm test.o

test.o: test.cpp sorting-lab.cpp
	g++ -std=c++11 test.cpp sorting-lab.cpp -o test.o #-ggdb

