CC=g++
CFLAGS=-g -c -Wall -Wextra

all: student

student: main.o Student.o MITPerson.o Class.o
	$(CC) main.o Student.o MITPerson.o Class.o -o student

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Student.o: Student.cpp
	$(CC) $(CFLAGS) Student.cpp

MITPerson.o: MITPerson.cpp
	$(CC) $(CFLAGS) MITPerson.cpp

Class.o: Class.cpp
	$(CC) $(CFLAGS) Class.cpp

clean:
	rm *.o student
