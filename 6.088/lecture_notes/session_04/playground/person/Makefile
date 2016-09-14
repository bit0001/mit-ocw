CC=g++
CFLAGS=-g -c -Wall -Wextra

all: test

test: test_person.o person.o
	$(CC) test_person.o person.o -o test

test_person: test_person.cpp
	$(CC) $(CFLAGS) test_person.cpp

person.o: person.cpp
	$(CC) $(CFLAGS) person.cpp

clean:
	rm *.o test
