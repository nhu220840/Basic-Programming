main: Ex5.o normal.o recursive.o
	gcc Ex5.o normal.o recursive.o -o main

Ex5.o: Ex5.c
	gcc -c Ex5.c

normal.o: normal.c normal.h
	gcc -c normal.c

recursive.o: recursive.c recursive.h
	gcc -c recursive.c

clean: 
	rm *.o main