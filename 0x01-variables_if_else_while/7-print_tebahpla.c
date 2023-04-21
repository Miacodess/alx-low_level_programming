#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char lcase;
	for(lcase = 'z'; lcase <= 'a'; lcase--)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
