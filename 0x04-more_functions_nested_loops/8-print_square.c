#include "main.h"

/**
 * print_square - prints a square, then a new line
 * @size: size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int l, b;

	b = 0;

	if (size < 1)
		_putchar('\n');
	while (b < size)
	{
		l = 0;

		while (l < size)
		{
			_putchar('#');
			l++;
		}
	_putchar('\n');
	b++;
	}
}
