#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0 always
 */

int main(void)
{
	unsigned long int i;
	unsigned long int be = 1;
	unsigned long int af = 2;
	unsigned long int j = 1000000000;
	unsigned long int be1;
	unsigned long int be2;
	unsigned long int af1;
	unsigned long int af2;

	printf("%lu", be);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", af);
		af += be;
		be = af - be;
	}

	be1 = (be / j);
	be2 = (be % j);
	af1 = (af / j);
	af2 = (af % j);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", af1 + (af2 / j));
		printf("%lu", af2 % j);
		af1 = af1 + be1;
		be1 = af1 - be1;
		af2 = af2 + be2;
		be2 = af2 - be2;
	}
	printf("\n");
	return (0);
}
