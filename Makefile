main: main.o funcs.o
    g++ -o main main.o funcs.o

tests: tests.o funcs.o caesar.o vigenere.o decrypt.o
    g++ -o tests tests.o funcs.o caesar.o vigenere.o decrypt.o

tests.o: tests.cpp doctest.h funcs.h
    g++ -c tests.cpp

test-ascii: test-ascii.o
    g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp
    g++ -c test-ascii.cpp

caesar.o: caesar.cpp caesar.h
    g++ -c caesar.cpp

funcs.o: funcs.cpp funcs.h
    g++ -c funcs.cpp

decrypt.o: decrypt.cpp decrypt.h
    g++ -c decrypt.cpp

main.o: main.cpp funcs.h
    g++ -c main.cpp

vigenere.o: vigenere.cpp vigenere.h
    g++ -c vigenere.cpp

clean:
    rm -f *.o test-ascii tests 