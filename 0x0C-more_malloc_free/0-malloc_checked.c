#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: byte allocated
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (malloc == NULL)
		exit(98);
	return (p);
}
