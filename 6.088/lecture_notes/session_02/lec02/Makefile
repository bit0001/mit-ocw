CC=g++
CFLAGS=-c -Wall -Wextra

all: linked_lists

linked_lists: main.o singly_linked_list.o
	$(CC) main.o singly_linked_list.o -o linked_lists

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

singly_linked_list.o: singly_linked_list.cpp
	$(CC) $(CFLAGS) singly_linked_list.cpp

clean:
	rm *.o linked_lists
