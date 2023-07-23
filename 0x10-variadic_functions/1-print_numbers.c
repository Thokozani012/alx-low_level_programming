#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers seperated by a seperator
 * @seperator: special character used to seperate numbers
 * @n: numbers
 *
 * Return: Nothing (void function)
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);

		if (i < n - 1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}

	va_end(args);
	printf("\n");
}
