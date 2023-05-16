#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 * Return: cancatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int size1, size2, size, i, j;

	size1 = size2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			size1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			size2++;
	}
	size = size1 + size2;
	pointer = (char *)malloc(sizeof(char) * (size + 1));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		pointer[i] = s1[i];
	for (j = 0; j < size2; j++, i++)
		pointer[i] = s2[j];

	return (pointer);
}
