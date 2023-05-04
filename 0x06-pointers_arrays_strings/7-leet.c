#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: atring to encode
 *
 * Return: 0 (Success)
 */

char *leet(char *s)
{
	int a, b;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a1[b] == a2[a])
				s[a] = a2[b];
		}
	}
	return (s);
}
