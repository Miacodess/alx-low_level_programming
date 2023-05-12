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
	int chan, c;

	c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	chan = atoi(argv[1]);
	if (chan < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (chan % 25 >= 0)
	{
		c += chan / 25;
		chan = chan % 25;
	}
	if (chan % 10 >= 0)
	{
		c += chan / 10;
		chan = chan % 10;
	}
	if (chan % 2 >= 0)
	{
		c += chan / 2;
		chan = chan % 2;
	}
	if (chan % 1 >= 0)
	{
		c += chan / 1;
	}
	printf("%d\n", c);
	return (0);
}
