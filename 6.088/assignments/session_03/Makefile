CC=g++
CFLAGS=-g -c -Wall -Wextra

all: bst

bst: test_bst.o binary_search_tree.o
	$(CC) test_bst.o binary_search_tree.o -o bst

test_bst.o: test_bst.cpp
	$(CC) $(CFLAGS) test_bst.cpp

binary_search_tree.o: binary_search_tree.cpp
	$(CC) $(CFLAGS) binary_search_tree.cpp

clean:
	rm *.o bst
