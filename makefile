all: Driver.o linkedlist.o
	gcc -o linkedlist Driver.o linkedlist.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

Driver.o: Driver.c
	gcc -c Driver.c

clean:
	rm out
	rm *.o
