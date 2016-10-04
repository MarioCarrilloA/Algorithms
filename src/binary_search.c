#include <stdio.h>
#include<stdlib.h>


int binary_search(int v[], int num_elements, int element) {

	int centre;
	int lower = 0;
	int upper = num_elements - 1;

	while (lower <= upper) {
		centre = ((upper - lower) / 2) + lower;
		if (v[centre] == element)
			return 1;
		else if (element < v[centre])
			upper = centre - 1;
		else
			lower = centre + 1;
	}

	return 0;
}

int main()
{
	int v[] = {4, 13, 19, 76, 88, 2, 22};
	int num_elements;

	printf("Binary Search\n");
	num_elements = sizeof(v) / sizeof(int);

	if (binary_search(v, num_elements, 76))
		printf("Found\n");
	else
		printf("No found\n");

	if (binary_search(v, num_elements, 81))
		printf("Found\n");
	else
		printf("No found\n");

	return EXIT_SUCCESS;
} 
