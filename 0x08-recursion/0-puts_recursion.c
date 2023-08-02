#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: string to be printed
 *
 * Return: Nothing (void function)
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}
