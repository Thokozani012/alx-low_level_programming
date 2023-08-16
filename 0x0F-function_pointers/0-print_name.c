#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  Prints a name
 * @name: Name to be printed
 * @f: function pointer
 *
 * Return: Nothing (void function)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
