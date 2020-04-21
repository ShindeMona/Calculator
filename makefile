output: main.o operation.o
        gcc main.o operation.o -o output

main.o: main.c
        gcc -c main.c

operation.o: operation.c myLib.h
        gcc -c operation.c

