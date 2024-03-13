main: Ex4.o factorial.o
	gcc Ex4.o factorial.o -o main

Ex4.o: Ex4.c
	gcc -c Ex4.c

factorial.o: factorial.c factorial.h
	gcc -c factorial.c

clean: 
	rm *.o main