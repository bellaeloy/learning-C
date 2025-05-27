all:	recursion.o
	gcc recursion.o main.c -o main

matrix.o:
	gcc -c recursion.c

clean:
	rm -rf *.o main

run:
	./main

test:	
	gcc main.c recursion.c && ./a.out

main:
	gcc main.c && ./a.out