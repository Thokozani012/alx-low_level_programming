#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: the integer to be printed
 *
 * Return: the last integer.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
