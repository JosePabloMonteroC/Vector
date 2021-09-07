tests/testInit: testInit.o Vectors.o unity.o
	gcc testInit.o Vectors.o unity.o -o testInit

tests/testInit.o: tests/testInit.c
	gcc -c tests/testInit.c

src/Vectors.o: src/Vectors.c
	gcc -c src/Vectors.c

src/unity.o: src/unity.c
	gcc -c src/unity.c


