#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: integer parameter
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer parameter
 * @i: integer prameter
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * 1) == n)
	{
		return (i);
	}
	return (_sqrt(n, i++));
}
