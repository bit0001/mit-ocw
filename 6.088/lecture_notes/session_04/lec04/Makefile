CC=g++
CFLAGS=-g -c -Wall -Wextra

all: simulation

simulation: simulation.o Patient.o Virus.o
	$(CC) simulation.o Patient.o Virus.o -o simulation

simulation.o: simulation.cpp
	$(CC) $(CFLAGS) simulation.cpp

Patient.o: Patient.cpp
	$(CC) $(CFLAGS) Patient.cpp

Virus.o: Virus.cpp
	$(CC) $(CFLAGS) Virus.cpp

clean:
	rm *.o simulation
