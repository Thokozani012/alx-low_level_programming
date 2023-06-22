#include "main.h"

/**
 * main - checks if c is a lowercase letter
 *
 * Return: 1 if c is a lowercase.
 * Return: 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
