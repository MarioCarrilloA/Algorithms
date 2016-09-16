CC=gcc
CFLAGS=-c -Wall

all: bubble_sort fibonacci doubly_linked_list_hn

bubble_sort: src/bubble_sort.o
	$(CC) src/bubble_sort.o -o bubble_sort

bubble_sort.o: src/bubble_sort.c
	$(CC) $(CFLAGS) src/bubble_sort.c

fibonacci: src/fibonacci.o
	$(CC) src/fibonacci.o -o fibonacci

fibonacci.o: src/fibonacci.c
	$(CC) $(CFLAGS) src/fibonacci.c

doubly_linked_list_hn: src/doubly_linked_list_hn.o
	$(CC) src/doubly_linked_list_hn.o -o doubly_linked_list_hn

doubly_linked_list_hn.o: src/doubly_linked_list_hn.c
	$(CC) $(CFLAGS) src/doubly_linked_list_hn.c
