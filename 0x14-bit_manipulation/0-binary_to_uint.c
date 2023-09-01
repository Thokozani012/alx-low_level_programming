#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to the binary string
 *
 * Return: The converted number or 0 if b is NULL or,
 * one or more of the chars of b are not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int len = 0;
	unsigned int decNum = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i < len; i--)
	{
		if (b[i] == '1')
			decNum += (1 << (len - 1 - i));
		else if (b[i] == '0')
			decNum += 0;
		else
			return (0);
	}

	return (decNum);
}
