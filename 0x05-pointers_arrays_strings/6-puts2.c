#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every other char of a string starting at elm 0.
 * @str: String
 *
 * Return: Nothing (void function)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
