#include "main.h"
/**
 * print_times_table - prints time table
 * @m: use in times table
 * Return: void
 */

void print_times_table(int m)
{       
        int i = 0, times, j;
        
        if (m < 0 || m > 15)
                return;
        
        while (i <= m)
        {       
                for (j = 0; j <= m; j++)
                {       
                        times = i * j;
                        if (j == 0)
                                _putchar('0' + times);
                        else if (times < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + times);
			}
			else if (times < 100){
				_putchar (' ');
				_putchar('0' + times / 10);
				_putchar( '0' + times % 10);
			}
			else
			{
				_putchar('0' + times / 100);
				_putchar('0' + (times - 100) / 10);
				_putchar('0' + times % 10);
			}
			if (j < m)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
