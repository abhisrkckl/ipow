test: test.o
	g++ test.o -o test

test.o: test.cpp ipow.hpp
	g++ -c test.cpp -o test.o