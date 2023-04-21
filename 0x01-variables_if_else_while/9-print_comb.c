#include <stdio.h>
/**
 * main - main block
 * Description: print out all possible combination of single digits
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}

