#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps values of two integers
 * @a: first pointer
 * @b: seconf pointer
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;

	*b = *a - *b;

	*a = *a - *b;
}
