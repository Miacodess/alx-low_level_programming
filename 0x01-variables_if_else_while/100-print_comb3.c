#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: prints all the combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int num;
	int num1 = 0;

	while (num1 < 10)
	{
		num = 0;

		while (num < 10)
		{
			if (num1 != num && num1 < num)
			{
				putchar('0' + d);
				putchar('0' + c);
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
