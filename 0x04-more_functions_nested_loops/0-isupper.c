#include "main.h"

/**
 * _isupper - Function checks for uppercase character.
 * @c: The character to be checked
 *
 * Return: 1 if character c is uppercase or 0 anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
