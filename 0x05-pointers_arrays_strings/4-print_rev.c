#include "main.h"
#include <stdio.h>

/**
 * _strlen - Determines the length of a string
 * @s: string
 *
 * Return: The reversed string
 */
int _strlen(char *s)
{
	int j = 0;
	int strlen = 0;

	while (s[j] != '\0')
	{
		strlen++;
		j++;
	}
	return (strlen);
}

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 *
 * Return: Nothing, its a void function.
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
