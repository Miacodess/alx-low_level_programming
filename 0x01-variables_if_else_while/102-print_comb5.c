#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations of
 * two-digit numbers with range 0-99
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;
	int num1;
	int num2;

	int num0;
	int num11;
	int num21;

	while (num <= 98)
	{
		num1 = (num / 10 + '0');
		num2 = (num % 10 + '0');
		num0 = 0;

		while (num0 <= 99)
		{
			num11 = (num0 / 10 + '0');
			num21 = (num0 % 10 + '0');

			if (num < num0)
			{
				putchar(num1);
				putchar(num2);
				putchar(' ');
				putchar(num11);
				putchar(num21);

				if (num != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num0++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
