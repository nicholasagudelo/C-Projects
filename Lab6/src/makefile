# Nicholas Agudelo
# CSC 60, Section 01
# Fall 2025
# Lab 6 


CC = gcc
CFLAGS = -I../include
OBJ = main.o bitwiseOps.o convUtils.o
TARGET = bitwise

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c ../include/lab6.h ../data/input.dat

bitwiseOps.o: bitwiseOps.c ../include/lab6.h ../data/input.dat

convUtils.o: convUtils.c ../include/lab6.h ../data/input.dat

clean:
	$(RM) $(TARGET) *.o *.a
