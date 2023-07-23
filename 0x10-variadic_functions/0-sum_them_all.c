#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: First function parameter
 *
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;
	unsigned int value;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}

	va_end(args);
	return (sum);
}
