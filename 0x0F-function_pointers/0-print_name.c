#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name from a function pointer
 * @name: name/string characters to be printed
 * @f: function pointer that takes a string argument
 *
 * Return: Nothing (void function)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
