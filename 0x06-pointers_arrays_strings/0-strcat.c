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
	int i = 0, j = 0;

	while (*dest != '\0')
	{
		++dest;
		i++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (0);
}
