
#include "main.h"

/**
 * puts2 - prints the character of a string
 *@str: pointer to the string
 * Return: 0 (Success)
 */
void puts2(char *str)
{
	int q = 0;

	while (str[q] != '\0')
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
		q++;
	}
	_putchar('\n');
}
