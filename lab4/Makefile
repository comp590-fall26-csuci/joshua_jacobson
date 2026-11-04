main: main.o fibonacci.o
	cc -Iheaders main.o fibonacci.o -o main -lm

main.o: main.c
	cc -c -Iheaders main.c -o main.o -lm

fibonacci.o: fibonacci.c
	cc -c -Iheaders fibonacci.c -o fibonacci.o

clean:
	rm -f *.o main
