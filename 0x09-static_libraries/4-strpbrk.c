#include "main.h"
/**
 * _strpbrk - bytes
 * @s: char pointer
 * @accept: char pointer
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)

{
	while (*s)
	{
		char *t = accept;

		while (*t)
		{

			if (*s == *t)
			{
				return (s);

			}

			t++;

		}

		s++;

	}

	return (NULL);

}
