#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int nm1, nm2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	nm1 = atoi(argv[1]);
	nm2 = atoi(argv[2]);
	printf("%d\n", nm1 * nm2);

	return (0);
}
