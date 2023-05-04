#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase string to uppercase
 *
 * Return: 0 (Success)
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
