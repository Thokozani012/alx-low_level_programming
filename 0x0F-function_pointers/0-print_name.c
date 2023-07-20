#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: pointer to the function 'print_name'
 *
 * Return: Nothing (void function)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
