#include "main.h"
/**
 * _atoi - convert a string to integer
 * @s: pointer to the string
 * Return: 0
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int in = 0;
	int cin = 1;
	int nic = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			cin *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			nic = 1;
			in = (in * 10) + (s[c] - '0');
			c++;
		}
		if (nic == 1)
		{
			break;
		}
		c++;
	}
	in *= cin;
	return (in);
}
