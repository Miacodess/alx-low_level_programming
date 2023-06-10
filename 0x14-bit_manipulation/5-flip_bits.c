#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number to check
 * @m: number to check
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int bit_res = n ^ m;

	while (bit_res != 0)
	{
		count += bit_res & 1;
		bit_res >>= 1;
	}
	return (count);
}
