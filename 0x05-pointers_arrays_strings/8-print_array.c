#include "main.h"
/**
 * print_array - prints 'n' elements of an array of integers,
 * then a new line
 * @a: int type array pointer
 * @n: integer
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf('\n');
}
