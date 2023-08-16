#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -  Prints a name
 * @name: Name to be printed
 * @f: Pointer to a function
 *
 * Return: Nothing (void function)
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
