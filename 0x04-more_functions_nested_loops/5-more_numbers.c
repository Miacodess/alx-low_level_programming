#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 * from 10 to 14, then a new line
 * Return: 0
 */

void more_numbers(void)
{
	char i;

	for (i = 0; i <= 10; i++)
	{
		int  j = 0;

		while (j <= 14)
		{
			_putchar((j / 10) + '0');
			j++;
		}
		_putchar((j % 10) + '0');
	}
	_putchar('\n');
}
