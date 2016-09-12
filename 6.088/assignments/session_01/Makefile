CC=g++
CFLAGS=-c -Wall -Wextra

all: hello_time

hello_time: main.o hello_world.o current_time.o
	$(CC) main.o hello_world.o current_time.o -o hello_time

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

hello_world.o: hello_world.cpp
	$(CC) $(CFLAGS) hello_world.cpp

current_time.o: current_time.cpp
	$(CC) $(CFLAGS) current_time.cpp

clean:
	rm *.o hello_time
