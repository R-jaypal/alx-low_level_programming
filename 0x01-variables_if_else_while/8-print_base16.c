#include <stdio.h>

/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: 0 when through
 */

int main(void)
{
	int i;
	char n;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (n = 'a' ; n <= 'f' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
