#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints multiples of 3 and 5 below 1024,
 * computes the sum of all multiples.
 * Return: 0
 */

int main(void)
{
	int mul35, summul;

	while (mul35 < 1024)
	{
		if (mul35 % 3 == 0 || mul35 % 5 == 0)
		{
			summul += c;
		}
		mul35++;
	}
	_putchar("%i\n", summul);
	return (0);
}
