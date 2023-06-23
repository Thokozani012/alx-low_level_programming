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

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
