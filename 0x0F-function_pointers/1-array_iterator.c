#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: integer array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (array == NULL || action == NULL)
		return;

	for (p = 0; p < size; p++)
		action(array[p]);
}
