CC=g++
CFLAGS=-g -c -Wall -Wextra

all: main

main: main.o mammal.o dog.o cat.o
	$(CC) main.o mammal.o dog.o cat.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

mammal.o: mammal.cpp
	$(CC) $(CFLAGS) mammal.cpp

dog.o: dog.cpp
	$(CC) $(CFLAGS) dog.cpp

cat.o: cat.cpp
	$(CC) $(CFLAGS) cat.cpp

clean:
	rm *.o main
