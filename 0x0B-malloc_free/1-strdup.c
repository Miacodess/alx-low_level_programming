#include "main.h"

/**
 * _strdup - function to duplicate string
 * @str: string to duplicate
 * Return: string pointer
 */

char *_strdup(char *str)
{
	char *copy;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		copy[i] = str[i];
	copy[length] = '\0';
	return (copy);
}
