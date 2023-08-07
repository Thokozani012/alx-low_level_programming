#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if the string has digits
 * @str: String
 *
 * Return: 0 on Success, Otherwise 1 is returned.
 */

int _isdigit(const char *str)
{
	char *endptr;

	if (*str == '\0')
	{
		return (0);
	}

	strtol(str, &endptr, 10);
	return (*endptr == '\0');
}
