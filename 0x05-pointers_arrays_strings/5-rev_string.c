#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: The string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;
	int j, k;

	while (s[i++])
	{
		len++;
	}

	for (j = 0, k = len - 1; j < k; j++, k--)
	{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
	}
}
