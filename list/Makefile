# list/Makefile
#
# Makefile for list implementation and test file.
#
# Mesoma Nwankwo
# Compiler and flags
CC = gcc
CFLAGS = -std=c99 -Wall -Werror -g
TARGET = list

# Default target
all: $(TARGET)

# How to build the executable
$(TARGET): main.o list.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o list.o

# How to compile main.c into main.o
main.o: main.c list.h
	$(CC) $(CFLAGS) -c main.c

# How to compile list.c into list.o
list.o: list.c list.h
	$(CC) $(CFLAGS) -c list.c

# Clean up
clean:
	rm -f *.o $(TARGET)
