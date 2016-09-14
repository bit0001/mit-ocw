CC=g++
CFLAGS=-g -c -Wall -Wextra

all: bst

bst: test_BST.o BST.o bst_struct.o
	$(CC) test_BST.o BST.o bst_struct.o -o bst

test_BST.o: test_BST.cpp
	$(CC) $(CFLAGS) test_BST.cpp

BST.o: BST.cpp
	$(CC) $(CFLAGS) BST.cpp

bst_struct.o: bst_struct.cpp
	$(CC) $(CFLAGS) bst_struct.cpp

clean:
	rm *.o bst
