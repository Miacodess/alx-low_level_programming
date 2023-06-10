#include <unistd.h>
/**
 * _putchar - write in stdout c character
 * @c: character to print
 * Return: success on 1
 * On error, return -1, set error appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
