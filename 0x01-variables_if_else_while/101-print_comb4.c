#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that prints all possible
 * different combinations of three digits
 * Return: 0 (Success)
 */

int main(void)
{
	int num;
	int num1;
	int num2 = 0;

	while (num2 < 10)
	{
		num1 = 0;
		
		while (num1 < 10)
		{
			num = 0;

			while (num < 10)
			{
				if (num != num1 && num1 != num2 && num2 < num1 && num1 < num)
				{
					putchar('0' + num2);
					putchar('0' + num1);
					putchar('0' + num);

					if (num + num1 + num2 != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num++;
			}
			num1++;
		}
		num2++;
	}
	putchar('\n');
	return (0);
}
