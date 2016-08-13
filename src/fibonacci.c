#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	int value;

	if (n == 0)
		return 0;

	else if (n == 1)
		return 1;
	else
		return fibonacci(n -1) + fibonacci(n -2);

}
int main ()
{	
	int i,n;

	printf("Fibonacci\n");
	n = 10;
	for (i = 0; i < n; i++)
		printf("%d ", fibonacci(i));
	printf("\n");

	return EXIT_SUCCESS;
}
