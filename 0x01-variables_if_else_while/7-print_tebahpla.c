#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char lcase = 'z';

	while (lcase >= 'a')
	{
		putchar(lcase);
		lcase--;
	}
	putchar('\n');
	return (0);
}
