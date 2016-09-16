CC=g++
CFLAGS=-g -c -Wall -Wextra

all: main

main: main.o player.o
	$(CC) main.o player.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

player.o: player.cpp
	$(CC) $(CFLAGS) player.cpp

clean:
	rm *.o main
