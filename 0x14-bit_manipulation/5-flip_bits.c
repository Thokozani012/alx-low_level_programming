#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Calculates the numbero of bits to flip
 * @n: Number/bits to be flipped
 * @m: Desired number/bits
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned  long int m)
{
	unsigned long int bn, bm, flip = 0;

	while (n > 0 || m > 0)
	{
		bn = (n & 1);
		bm = (m & 1);

		if (bn != bm)
			flip++;

		n >>= 1;
		m >>= 1;
	}
	return (flip);
}
