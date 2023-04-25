#include "main.h"
/**
 * times_table - prints tables
 * Return: 0 (Success)
 */

void times_table(void)
{
	int a = 0;
	int b;
	int times;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			times = a * b;
			if (b == 0)
			{
				_putchar('0' + times);
			}
			else if (times < 10)
			{
				_putchar(' ');
				_putchar('0' + times);
			}
			else
			{
				_putchar('0' + times / 10);
				_putchar('0' + times % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			b++;
		}
		_putchar('\n');
		a++;
	}
}
