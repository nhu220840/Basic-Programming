main: Ex1.o GCD.o
	gcc Ex1.o GCD.o -o main

Ex1.o: Ex1.c
	gcc -c Ex1.c

GCD.o: GCD.c GCD.h
	gcc -c GCD.c

clean:
	rm *.o main