#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - Prints te binary representation of a number
 * @n: Number to be converted
 *
 * Return: Nothing (void function)
 */

void print_binary(unsigned long int n)
{
	int i = 0, Nbits, started;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	Nbits = sizeof(unsigned long) * 8;
	started = 0;

	for (i = Nbits - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if ((n & mask) != 0 || started)
		{
			_putchar('0' + ((n & mask) != 0 ? 1 : 0));
			started = 1;
		}
	}
}
