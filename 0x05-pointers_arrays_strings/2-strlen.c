#include "main.h"
#include <stdio.h>

/**
 * _strlen - fubction to check length of string
 *@s: pointer to the string
 * Return: 0 (Succes)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
