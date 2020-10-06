

main: main.o funcs.o 
	g++ -o main main.o funcs.o 

tests: tests.o funcs.o caesar.o viginere.o decrypt.o 
	g++ -o tests tests.o funcs.o caesar.o viginere.o decrypt.o

funcs.o: funcs.cpp funcs.h doctest.h

caesar.o: caesar.cpp caesar.h doctest.h

viginere.o: viginere.cpp viginere.h doctest.h

decrypt.o: decrypt.cpp decrypt.h doctest.h

main.o: main.cpp funcs.h doctest.h

tests.o: tests.cpp  doctest.h

clean:
	rm -f main.o tests.o funcs.o caesar.o viginere.o decrypt.o

help:
	@echo  make main : make executable named main
	@echo make tests : make test suite named tests

