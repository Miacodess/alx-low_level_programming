#include "function_pointers.h"
/**
 * int_index -  searches for an integer
 * @array: integer array
 * @size: size of array
 * @cmp: pointer to function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res == 1)
			return (i);
	}
	return (-1);
}
