#include "main.h"

/**
 * print_alphabet_x10 - function prints 10 times the alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		_putchar('\n');
	}
}
