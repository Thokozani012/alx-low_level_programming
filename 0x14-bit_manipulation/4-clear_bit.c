#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bt to 0 at a given index
 * @n: number to be manipulated
 * @index: position of the bit to be changed
 * Return: 1 on success, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, nbits;

	nbits = sizeof(unsigned long int) * 8;

	if (index >= nbits)
		return (-1);
	mask = 1 << index;

	*n = *n & ~mask;

	return (1);
}
