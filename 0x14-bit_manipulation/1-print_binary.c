#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit_num = sizeof((unsigned long int) *8);

	unsigned long int mask = 1UL << (bit_num - 1);

	while (mask > n)
	{
		mask >>= 1;
	}

	while (mask > 0)
	{
		putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}
