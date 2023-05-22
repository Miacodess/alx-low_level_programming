#include <stdio.h>

/**
 * main - prints the file name it was compiled from
 *
 * Return: 0 (Always)
 */

int main(void)
{
	printf("The file name is: %s\n", __FILE__);
	
	return (0);
}
