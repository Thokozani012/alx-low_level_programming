#include "main.h"

/**
 * _isupper - Determines if letter is  uppercase
 * @c: Character to check
 *
 * Return: 1 On success and 0 Otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
