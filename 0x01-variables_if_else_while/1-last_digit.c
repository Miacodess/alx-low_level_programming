#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - main block
 * Description: Assign a number and check its last digit with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int n5;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n5 = n % 10;

	if (n5 > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, n5);
	else if (n5 == 0)
		printf("Last digit of %i is %i and is 0\n", n, n5);
	else if (n5 < 6)
		printf("Last digit of %i is %i is less than 6 and not 0\n", n, n5);
	return (0);
}

