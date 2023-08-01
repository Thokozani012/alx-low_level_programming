#include <stdio.h>
#include "main.h"

/**
 * _strlen - Determines the length of a string
 * @s: string
 *
 * Return: Length of the string
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

/**
 * puts_half - prints the 2nd half of a string
 * @str: string to be half printed
 *
 * Return: Nothing (void function)
 */

void puts_half(char *str)
{
	int n, i, j, len;

	len = _strlen(str);
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = len / 2;
		for (j = n; j < n; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
