#include "main.h"

/**
  * set_bit - Sets the value of a bit to 1 at a given index
  * @n: number where the bit will be changed
  * @index: the position of the bit to be changed
  *
  * Return: 1 on success, or -1 on error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, bBits;

	nBits = sizeof(unsigned long int) * 8;

	if (index >= nBits)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
