#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
	struct node *back;
};

struct node *init ();

int insert(struct node *element);

int delete(int element);

void print(struct node *list);

int main ()
{
	printf("Doubly Linked List with Head Node");

	return EXIT_SUCCESS;
}

