#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';
	while(alpha <= 'z')
	{
		if(alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++
	}
		putchar('\n');
		return (0);
	}
