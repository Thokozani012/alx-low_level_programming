#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the string length
 * @s: string
 *
 * Return: Length of the string @s.
 */

int _strlen(char *s)
{
	int i = 0;
	int strLen = 0;

	while (s[i] != '\0')
	{
		strLen++;
		i++;
	}
	return (strLen);
}
