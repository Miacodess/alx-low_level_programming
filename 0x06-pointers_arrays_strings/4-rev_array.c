#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse content of an integer array
 * @a: integer array
 * @n: number of elements in array
 *
 * Return: 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
