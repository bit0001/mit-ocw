CC=g++
CFLAGS=-g -c -Wall -Wextra

all: main

main: main.o
	$(CC) main.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o main
