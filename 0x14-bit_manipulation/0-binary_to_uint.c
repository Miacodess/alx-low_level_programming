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
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			res = res * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (res);
}
