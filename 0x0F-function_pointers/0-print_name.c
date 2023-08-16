#include "function_pointers.h"

/**
 * print_name -  Prints a name from a function pointer
 * @name: Name to be printed
 * @f: Pointer to a function that takes a string(name) argument
 *
 * Return: Nothing (void function)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
