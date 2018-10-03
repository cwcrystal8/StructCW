all: struct.o
	gcc struct.o

struct.o: struct.c
	gcc -c struct.c

clean:
	rm *.o

run:
	./a.out
