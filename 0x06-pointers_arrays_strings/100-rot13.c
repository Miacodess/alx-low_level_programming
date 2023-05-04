#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using ROT13
 * @s: string to encode
 *
 * Return: 0 (Success)
 */

char *rot13(char *s)
{
	int i, j;

	char dee[] = "QWERTYUIOPASDFGHJKLZXCVBNMmnbvcxzlkjhgfdsapoiuytrewq";
	char gee[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; gee[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == gee[j])
			{
				s[i] = dee[j];
				boolean = 1;
			}
		}
	}
	return (s);
}
