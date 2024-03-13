main: Ex2.o GCD.o
	gcc Ex2.o GCD.o -o main

Ex2.o: Ex2.c
	gcc -c Ex2.c

GCD.o: GCD.c GCD.h
	gcc -c GCD.c

clean: 
	rm *.o main