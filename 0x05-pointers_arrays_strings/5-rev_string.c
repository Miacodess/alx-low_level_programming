#include "main.h"
#include <stdio.h>


/**
 * rev_string - function to reverse a string
 * @s: pointer to the string
 *
 * Return: 0 (Success)
 */

void rev_string(char *s)
{
	int len, c;
	char *start, *hind, temp;

	len = strlen(s);
	start = s;
	hind = s;

	for (c = 0; c < len - 1; c++)
		hind++;

	for (c = 0; c < len / 2; c++)
	{
		temp = *hind;
		*hind = *start;
		*start = temp;

		start++;

		hind--;
	}
}
