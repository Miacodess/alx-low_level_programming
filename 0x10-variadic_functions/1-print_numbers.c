#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers then a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int num;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d\n", num);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d%s", num, separator);
		}
	}
	va_end(arg);
}
