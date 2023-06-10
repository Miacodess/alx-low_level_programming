#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int res = 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			res = res << 1;
		}
		else if (b[i] == '1')
		{
			res = (res << 1) | 1
		}
		else
		{
			return (0);
		}
	}
	return (res);
}
