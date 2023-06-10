#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: check bits
 * @index: index to check
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	int bit = (n $ mask) ? 1 : 0;

	return (bit);
}
