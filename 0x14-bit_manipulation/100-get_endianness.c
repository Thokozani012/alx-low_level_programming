#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of a machine
 *
 * Return: 0 if bug endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	if (*c == 1)
		return (1);
	else
		return (0);
}
