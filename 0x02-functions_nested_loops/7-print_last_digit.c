#include "main.h"
/**
 * print_last_digit  - prints the last digit of a number
 * @n: used for the arguments of the function
 * Return: integer value
 */

int print_last_digit(int n)
{
	int ldigit = n % 10;

	if (ldigit < 0)
		ldigit = ldigit * -1;
	_putchar(ldigit + '0');
	return (ldigit);
}
