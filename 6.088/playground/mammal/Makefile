CC=g++
CFLAGS=-g -c -Wall -Wextra

all: main

main: main.o mammal.o dog.o
	$(CC) main.o mammal.o dog.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

mammal.o: mammal.cpp
	$(CC) $(CFLAGS) mammal.cpp

dog.o: dog.cpp
	$(CC) $(CFLAGS) dog.cpp

clean:
	rm *.o main
