# Nicholas Agudelo
# Class: CSC 60, Section 01
# Semester: Fall 2025
# Lab 5 

CC = gcc
CFLAGS = -I../include -Wall -g
OBJ = main.o getRange.o printFuns.o
TARGET = printRange

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.c ../include/lab5.h ../include/utils.h
	$(CC) $(CFLAGS) -c main.c

getRange.o: getRange.c ../include/utils.h
	$(CC) $(CFLAGS) -c getRange.c

printFuns.o: printFuns.c ../include/utils.h
	$(CC) $(CFLAGS) -c printFuns.c

clean:
	$(RM) $(TARGET) *.o *.a
