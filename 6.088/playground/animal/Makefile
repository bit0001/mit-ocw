CC=g++
CFLAGS=-g -c -Wall -Wextra

all: test

test: test.o animal.o
	$(CC) test.o animal.o -o test

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp

animal.o: animal.cpp
	$(CC) $(CFLAGS) animal.cpp

clean:
	rm *.o test
