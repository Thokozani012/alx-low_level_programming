#include "main.h"

/**
  * get_bit - Gets the value of a bit ata given index
  * @n: number where the bit will be extracted
  * @index: the position of the bit to be extracted
  *
  * Return: Value of the bit at 'indx' or -1 on errno
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int nBits;

	nBits = sizeof(unsigned long int) * 8;

	if (index >= nBits)
		return (-1);
	else
		return ((n >> index) & 1);
}
