#include "main.h"

/**
 * print_diagonal - The function prints a diagonal line on then terminal
 * @n: Is the length of the digonal line
 *
 * Return: A diagonal on a terminal when called.
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
