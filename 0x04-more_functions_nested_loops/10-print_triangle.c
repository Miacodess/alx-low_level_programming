#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int c, a, b;

	c = 0;
	a = size - 1;

	while (c < size)
	{
		a = size - 1 - c;
		b = c + 1;

		while (a > 0)
		{
			_putchar(' ');
			a--;
		}
		while (b > 0)
		{
			_putchar('#');
			b--;
		}
		_putchar('\n');
		c++;
	}
	if (size <= 0)
		_putchar('\n');
}
