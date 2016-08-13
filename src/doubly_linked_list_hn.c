#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
	struct node *back;
};

struct node *init () {
	struct node *list;
	list = malloc(sizeof(struct node));
	if (list == NULL)
		exit(1);
	else
		list;
}

int insert(struct node *element);

int delete(int element);

void print(struct node *list);

int main ()
{
	printf("Doubly Linked List with Head Node");

	return EXIT_SUCCESS;
}

