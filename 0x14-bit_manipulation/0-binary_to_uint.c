#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: binary number to be converted
  *
  * Return: Converted number, or 0 if b has none (1s and 0s)
  * or when b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, decNum = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			decNum += (1 << (len - 1 - i));
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (decNum);
}
