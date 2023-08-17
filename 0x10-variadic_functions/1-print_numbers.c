#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers seperated by a 'seperator'
 * @seperator: String that seperate the numbers
 * @n: number of parameters to be printed
 *
 * Return: Nothing (void function)
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i < (n - 1) && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");

	va_end(args);
}
