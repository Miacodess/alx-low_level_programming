#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draw a diagonal line on terminal
 * @n: number of thimes character '\\' is printed
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');

		i++;
	}
	if (i == 0)
		_putchar('\n');
}
