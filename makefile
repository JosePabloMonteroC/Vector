/home/ic20jmc/TDAOT2021/Vector/testInit: /home/ic20jmc/TDAOT2021/Vector/src/Vectors.o /home/ic20jmc/TDAOT2021/Vector/src/unity.o /home/ic20jmc/TDAOT2021/Vector/tests/testInit.o
	gcc /home/ic20jmc/TDAOT2021/Vector/src/Vectors.o /home/ic20jmc/TDAOT2021/Vector/src/unity.o /home/ic20jmc/TDAOT2021/Vector/tests/testInit.o -o /home/ic20jmc/TDAOT2021/Vector/testInit

/home/ic20jmc/TDAOT2021/Vector/tests/testinit.o: /home/ic20jmc/TDAOT2021/Vector/tests/testInit.c
	gcc -c /home/ic20jmc/TDAOT2021/Vector/tests/testInit.c

/home/ic20jmc/TDAOT2021/Vector/src/unity.o: /home/ic20jmc/TDAOT2021/Vector/src/unity.c
	gcc -c /home/ic20jmc/TDAOT2021/Vector/src/unity.c

/home/ic20jmc/TDAOT2021/Vector/src/Vectors.o: /home/ic20jmc/TDAOT2021/Vector/src/Vectors.c
	gcc -c /home/ic20jmc/TDAOT2021/Vector/src/Vectors.c




