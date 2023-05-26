#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: first integer
 * @b: second integer
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first integer
 * @b: second integer
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first integer
 * @b: second integer
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
/**
 * op_mod - modulo (remainder)
 * @a: first integer (dividend)
 * @b: second integer (divisor)
 * Return: remainder of division (integer)
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
}
