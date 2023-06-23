#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Is the number of lines to printed
 *
 * Return: The function does not return a value
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\\');
	_putchar('n');
	_putchar('\n');
}
