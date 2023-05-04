#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n = 0;
	char s;

	while (s[n] != '\0')
	{
		*dest[n] = *src[n];
		n++;
	}
	*dest[n] = '\0';
	return (dest);
}

