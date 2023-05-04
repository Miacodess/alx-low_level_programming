#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two string
 * @dest: char
 * @src: char
 *
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		++dest;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (s);
}
