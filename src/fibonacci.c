#include <stdio.h>
#include <stdlib.h>

int fibo_recursive(int n)
{
	int value;

	if (n == 0)
		return 0;

	else if (n == 1)
		return 1;
	else
		return fibo_recursive(n -1) + fibo_recursive(n -2);

}

int fibo_iterative(int n)
{
	int a,b,c, aux;

	a = 1;
	b = 0;

	for (c = 0; c < n -1; c++) {
		aux = a + b;
		b = a;
		a = aux;
	}
	return b;
}


int main ()
{	
	int i,n;

	printf("Fibonacci\n");
	n = 10;

	for (i = 0; i < n; i++)
		printf("%d ", fibo_recursive(i));
	printf("\n");

	for (i = 0; i < n; i++)
		printf("%d ", fibo_iterative(i));
	printf("\n");

	return EXIT_SUCCESS;
}
