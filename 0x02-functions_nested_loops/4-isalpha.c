#include <stdio.h>

/**
 * _isalpha - Checks if c is an alphabet
 * @c: The character passed into the _isalpha function
 *
 * Return: 1 if c is an alphabet and 0 otherswise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
