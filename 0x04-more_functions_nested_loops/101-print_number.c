#include "main.h"

/**
 * print_number - Prints and integre
 * @n: the number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar(45);
		m = -m;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
