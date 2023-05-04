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

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
}
