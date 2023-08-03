#include <stdio.h>
#include "main.h"

/**
 * factorial - Computes the factorial of a number 'n'
 * @n: The number
 *
 * Return: The factorial of 'n' (n!) if n > 0,
 * Otherwise returns -1 for n < 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
