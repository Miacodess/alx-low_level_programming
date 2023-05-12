#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int change, c;

	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("%d\n", change);
		return (0);
	}
	if (change % 25 >= 0)
	{
		c += change / 25;
		change = change % 25;
	}
	if (change % 10 >= 0)
	{
		c += change / 10;
		change = change % 10;
	}
	if (change % 2 >= 0)
	{
		c += change / 2;
		change = change % 2;
	}
	if (change % 1)
	{
		c += change / 1;
	}
	printf("%d\n", c);
	return (0);
}
