#include <stdio.h>
/**
 * main- main block
 * Description: prints the alphabets in lower case
 * Return: 0
 */

int main(void)
{
	char alpha;

	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
