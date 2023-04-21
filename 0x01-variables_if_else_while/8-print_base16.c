#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: print base 16 digits
 * Return: 0 (Success)
 */

int main(void)

	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
	putchar(hex);
	}

	for (hex = 'a'; hex <= 'f'; hex++)
	{
	putchar(hex);
	}
putchar('\n');
return (0);
}
