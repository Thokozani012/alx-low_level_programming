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
	int n = 0;
	int first = 1;

	va_start(args, format);

	while (format[n])
	{
		switch (format[n])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
			default:
				break;
		}
		if (!first && format[n + 1])
		{
			printf(", ");
		}
		first = 0;
		n++;
	}
	printf("\n");
	va_end(args);
}
