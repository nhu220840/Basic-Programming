main: Ex3.o Fx.o Gxy.o
	gcc Ex3.o Fx.o Gxy.o -o main

Ex3.o: Ex3.c
	gcc -c Ex3.c

Fx.o: Fx.c Fx.h
	gcc -c Fx.c

Gxy.o: Gxy.c Gxy.h
	gcc -c Gxy.c

clean: 
	rm *.o main