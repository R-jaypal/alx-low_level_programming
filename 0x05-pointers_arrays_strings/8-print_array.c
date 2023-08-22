#include "main.h"


/**
 * print_array - a function that prints n elements of an array
 * @a: input array
 * @n: input n elements
 * Return: no return
 */

void print_array(int *a, int n)

{

	int i = 0;


	for (i = 0; i < n; i++)

	{

		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");

}
