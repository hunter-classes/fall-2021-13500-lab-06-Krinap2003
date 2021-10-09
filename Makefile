main: main.o funcs.o caesar.o vigenere.o
	g++ -o main main.o funcs.o caesar.o vigenere.o

tests: tests.o funcs.o caesar.o vigenere.o
	g++ -o tests tests.o funcs.o caesar.o vigenere.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o



funcs.o: funcs.cpp funcs.h
	g++ -c -g funcs.cpp

main.o: main.cpp funcs.h
	g++ -c -g main.cpp

tests.o: tests.cpp doctest.h funcs.h 
	g++ -c tests.cpp -std=c++11

test-ascii.o: test-ascii.cpp
	g++ -c -g test-ascii.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c -g caesar.cpp

vigenere.o: vigenere.cpp vigenere.h
	g++ -c -g vigenere.cpp

clean:
	rm -f main.o funcs.o tests.o test-ascii.o caesar.o vigenere.o
