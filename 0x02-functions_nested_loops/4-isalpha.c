#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@f : character to check
 * Returns: 0 or 1
 */

int _isalpha(int f)
{
	return ((f >= 97 && <= 122 || f >= 65 && f <= 90));
}
