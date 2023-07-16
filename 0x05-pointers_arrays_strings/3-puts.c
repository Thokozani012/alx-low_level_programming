#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a newline to stdout
 * @str: string to printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
