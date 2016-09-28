#include <stdio.h>
#include<stdlib.h>


int binary_search(int v[], int num_elements, int element) {

	int centre;
	int lower = 0;
	int upper = num_elements - 1;

	while (lower <= upper) {
		centre = ((upper - lower) / 2) + upper;
		if (v[centre] == element)
			return EXIT_SUCCESS;
		else if (element < v[centre])
			upper = centre - 1;
		else
			lower = centre + 1;
	}

	return EXIT_FAILURE;
}

int main()
{
	int v[] = {4, 13, 19, 76, 88, 2, 22};

	printf("Binary Search\n");
	if (binary_search(v, 7, 76))
		printf("Found\n");
	else
		printf("No found\n");

	return EXIT_SUCCESS;
} 
