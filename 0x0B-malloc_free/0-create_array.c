#include "main.h"

/**
 * create_array - creates an array
 * @size: size of char
 * @c: character to initialze char
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int v;
	char *x;

	if (size == 0)
		return (NULL);
	x = (char *)malloc(size * sizeof(char));
	if (x == NULL)
		return (NULL);

	for (v = 0; v < size; v++)
		x[v] = c;
	return (x);
}
