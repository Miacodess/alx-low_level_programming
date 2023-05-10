#include "main.h"

int prime_num(int i, int n);
/**
 * prime_num -check for prime number
 * @n: integer parameter
 * @i: integer parameter
 * Return: boolean
 */

int prime_num(int i, int n)
{
	if (n % 1 == 0)
	{
		return (0);
	}
	else if (n / 2 > i)
	{
		return (prime_num(i + 2, 1));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime
 * @n: integer parameter
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_num());
	}
}
