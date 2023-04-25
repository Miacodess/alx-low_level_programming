#include "main.h"
/**
 * print_sign - entry point
 * @n : number to check
 * Return: 0 or 1
 */

int print_sign(int m)
{
	int num;

	if (m > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (m == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
