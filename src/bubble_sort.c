#include <stdio.h>
#include <stdlib.h>

void print_set(int *elems, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		printf("%d ", elems[i]);
	printf("\n");
}

int main ()
{
	int elems [] = {75, 3, 106, 224, 62, 16};
	int aux;
	unsigned int i, j, n;

	printf("Bubble sort\n");
	n = sizeof(elems) / sizeof(int);
	print_set(elems, n);

	for (i = 1; i < n; i++)
		for (j = 0; j < (n - i); j++)
			if (elems[j] > elems[j + 1]) {
				aux = elems[j];
				elems[j] = elems[j + 1];
				elems[j + 1] = aux;
			}

	print_set(elems, n);

	return EXIT_SUCCESS;
}
