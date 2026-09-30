main: main.o fibonacci.o
	cc -Iheaders main.o fibonacci.o -o main

main.o: main.c
	cc -c -Iheaders main.c -o main.o

fibonacci.o: fibonacci.c
	cc -c -Iheaders fibonacci.c -o fibonacci.o

clean:
	rm -f *.o main
