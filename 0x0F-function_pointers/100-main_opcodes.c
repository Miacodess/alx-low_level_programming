#include "function_pointers.h"
/**
 * prints_opcodes - prints the opcodes of this program
 * @adr: addressmof main function
 * @n: number of bytes
 * Return: void
 */
void prints_opcodes(char *adr, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%.2hhx", adr[m]);
		if (m < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arg passed to the func
 * @argv:array of pointers to arg
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	prints_opcodes((char *)&main, n);
	return (0);
}
