#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string, then a new line
 * @str: pointer to the string
 *
 * Return: 0 (Success)
 */

void puts_half(char *str)
{
	int n = strlen(str);

	if (n % 2 == 0)
	{
		printf("%.*s\n", n / 2, str + n / 2);
	}
	else
	{
		printf("%.*s\n", (n - 1) / 2, str + (n + 1) / 2);
	}
}
