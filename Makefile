CC=gcc
CFLAGS=-c -Wall

all: bubble_sort

bubble_sort: src/bubble_sort.o
	$(CC) src/bubble_sort.o -o bubble_sort

bubble_sort.o: src/bubble_sort.c
	$(CC) $(CFLAGS) src/bubble_sort.c
