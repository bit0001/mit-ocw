CC=g++
CFLAGS=-g -c -Wall -Wextra

all: test

test: test_ba.o bank_account.o
	$(CC) test_ba.o bank_account.o -o test

test_ba.o: test_ba.cpp
	$(CC) $(CFLAGS) test_ba.cpp

bank_account.o: bank_account.cpp
	$(CC) $(CFLAGS) bank_account.cpp

clean:
	rm *.o test
