#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

int insert(struct node *list, int value)
{
	struct node *element;

	element = malloc(sizeof(struct node));
	if (element == NULL)
		return -1;

	memset(element, 0, sizeof(struct node));
	element->value = value;
	element->next = NULL;
	element->back = NULL;

	if (list->next == NULL) {
		list->next = element;
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

	list->next = element;
	element->back = list;

	return EXIT_SUCCESS;

}

int delete(struct node *list, int element)
{

	do {
		list = list->next;

		if (list->value == element) {
			list->back->next = list->next;
			if (list->next != NULL)
				list->next->back = list->back;
			free(list);

			return EXIT_SUCCESS;
		}

	} while(list->next != NULL);

	return EXIT_FAILURE;
}

void print(struct node *list) {
	do {
		list = list->next;
		printf("%d ",list->value);
	} while(list->next != NULL);
	printf("\n");
}

int main ()
{
	struct node *list;

	printf("Doubly Linked List with Head Node\n");
	list = init();
	insert(list, 60);
	print(list);
	insert(list, 4);
	print(list);
	insert(list, 97);
	print(list);
	insert(list, 71);
	print(list);

	delete(list, 60);
	print(list);
	delete(list, 97);
	print(list);
	delete(list, 71);
	print(list);
	delete(list, 4);
	print(list);

	free(list);

	return EXIT_SUCCESS;
}

