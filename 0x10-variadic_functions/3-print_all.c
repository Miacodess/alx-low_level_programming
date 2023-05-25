#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list my_list;

	va_list(my_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(my_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(my_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(my_list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(my_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(my_list);
}
