#include "main.h"
/**
 * print_alphabet: prints tha alphabet in lower-case
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n')
	return (0);
}
