CC=g++
CFLAGS=-g -c -Wall -Wextra

all: test

test: test.o animal.o dog.o
	$(CC) test.o animal.o dog.o -o test

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp

animal.o: animal.cpp
	$(CC) $(CFLAGS) animal.cpp

dog.o: dog.cpp
	$(CC) $(CFLAGS) dog.cpp

clean:
	rm *.o test && rm -r test.dSYM/
