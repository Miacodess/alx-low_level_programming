#include "main.h"
/**
 * _strcpy - copies strings pointed to by src
 * @dest: pointer to buffer where string is copied
 * @src: string to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
