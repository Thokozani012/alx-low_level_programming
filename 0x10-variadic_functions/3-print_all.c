#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: list of types of argumemnts passed to the function
 *
 * Return: Nothing (void function)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					printf(", ");
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					printf(", ");
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					printf(", ");
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
