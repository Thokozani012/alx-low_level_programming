#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: base 10 number to be converted to binary and op an extraction
 * @index: the position of the be extracted
 *
 * Return: Value of the extracted bit or -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	bit = (n & mask) ? 1 : 0;

	return (bit);
}
