#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @seperator: string char that seperates the strings
 * @n: Number of string arguments
 *
 * Return: Nothing (void function)
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);

		if (i < (n - 1) && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");

	va_end(args);
}
