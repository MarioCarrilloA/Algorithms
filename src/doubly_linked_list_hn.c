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

int insert(struct node list, int value)
{
	element = malloc(sizeof(struct node));
	if (element == NULL)
		return -1;

	memeset(element, 0, sizeof(struct node));
	element->value = n;

	if (list->next == NULL) {
		list->next element;
		element->back = list;
		return EXIT_SUCCESS;
	}

	do {
		list = list->next;
		if (list->value > element->value) {
			list->back->next = element;
			element->back = list->back;
			element->next = list;
			list->back = element;

			return EXIT_SUCCESS;
		}
	}while(list->next != NULL);

	return EXIT_FAILURE;

}

int delete(int element);

void print(struct node *list);

int main ()
{
	printf("Doubly Linked List with Head Node");

	return EXIT_SUCCESS;
}

