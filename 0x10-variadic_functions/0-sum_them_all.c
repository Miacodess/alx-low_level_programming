#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * Return: sum (integer)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum;
	unsigned int i;

	if  (n == 0)
		return (0);
	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}

