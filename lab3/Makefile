main: main.o fibonacci.o
	cc -I590MakefileLab/headers main.o fibonacci.o -o main

main.o: 590MakefileLab/main.c
	cc -c -I590MakefileLab/headers 590MakefileLab/main.c -o main.o

fibonacci.o: 590MakefileLab/fibonacci.c
	cc -c -I590MakefileLab/headers 590MakefileLab/fibonacci.c -o fibonacci.o

clean:
	rm -f *.o main
