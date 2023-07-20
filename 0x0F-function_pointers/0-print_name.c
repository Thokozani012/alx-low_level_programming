#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: function pointer that takes a string argument
 *
 * Return: Nothing (void function)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
