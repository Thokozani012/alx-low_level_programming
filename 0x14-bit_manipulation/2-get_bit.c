#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: number where the bit will be extracted
  * @index: the position of the bit to be extracted
  *
  * Return: Value of the bit at 'index' or -1 on error
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
