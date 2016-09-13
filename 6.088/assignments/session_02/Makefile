CC=g++
CFLAGS=-g -c -Wall -Wextra

all: binary_search_tree

binary_search_tree: test_binary_search_tree.o binary_search_tree.o
	$(CC) test_binary_search_tree.o binary_search_tree.o -o binary_search_tree

test_binary_search_tree.o: test_binary_search_tree.cpp
	$(CC) $(CFLAGS) test_binary_search_tree.cpp

binary_search_tree.o: binary_search_tree.cpp
	$(CC) $(CFLAGS) binary_search_tree.cpp

clean:
	rm *.o binary_search_tree
