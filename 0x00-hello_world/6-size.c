#include <stdio.h>
/**
 * main: Entry point
 * Return : 0(Success)
 *
 */

int main(void)
	{
		char myChar;
		int myInt;
		long int myLongInt;
		long long int myLongLongInt;
		float myFloat;

		printf("Size of a char: %d byte(s)\n", sizeof(myChar));
		printf("Size of an int: %d byte(s)\n", sizeof(myInt));
		printf("Size of a long int: %d byte(s)\n", sizeof(myLongInt));
		printf("Size of a long long int: %d byte(s)\n", sizeof(myLongLongInt));
		printf("Size of a float: %d byte(s)\n", sizeof(myFloat));

		return (0);

	}
