#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int _putchar(char c);
/**
 * print_number - print an integer
 * @n: integer to print
 * Return: 0 (Always)
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

