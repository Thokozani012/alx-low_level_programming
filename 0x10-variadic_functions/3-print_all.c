#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing (void functions)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *sep = "";
	int n = 0;

	va_start(args, format);

	if (format)
	{
	while (format[n])
	{
		switch (format[n])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;
			default:
				n++;
				continue;
		}
		sep = ", ";
		n++;
	}
	}
	printf("\n");
	va_end(args);
}
