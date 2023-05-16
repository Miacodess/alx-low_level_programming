#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of my program
 * @ac: count of args
 * @av: argument array
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *str, *t;
	int a, b, c, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		t = av[a];
		b = 0;

		while (t[b++])
			len++;

		len++;
	}

	str = (char *)maloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (a = 0, b = 0; a < ac && b < len; a++)
	{
		t = av[a];
		c = 0;

		while (t[c])
		{
			str[b] = s[c];
			c++;
			b++;
		}
		str[b++] = '\n';
	}
	str[b] = '\0';

	return (str);
}
