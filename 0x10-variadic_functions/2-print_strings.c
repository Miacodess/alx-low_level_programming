#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string, then a new line
 * @separator: string to be printed between the strings
 * @n: number o parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);
		if (string == NULL)
			string = "(nil)";
		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%s", string);
			else
				printf("%s%s", string, separator);
		}
		else
			printf("%s\n", string);
	}
	va_end(arg);
}
