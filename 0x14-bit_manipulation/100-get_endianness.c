#include "main.h"

/**
 * get_endianness -checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian/
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	unsigned char *ptr = (unsigned char *)&numb;

	if (*ptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
