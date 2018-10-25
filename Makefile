.PHONY: all clean

all: test_ipow test_pow

test_ipow: test_ipow.o
	g++ test_ipow.o -o test_ipow

test_ipow.o: test_ipow.cpp ipow.hpp
	g++ -c test_ipow.cpp -o test_ipow.o
	
test_pow: test_pow.o
	g++ test_pow.o -o test_pow

test_pow.o: test_pow.cpp 
	g++ -c test_pow.cpp -o test_pow.o
	
clean:
	rm *.o test_pow test_ipow
