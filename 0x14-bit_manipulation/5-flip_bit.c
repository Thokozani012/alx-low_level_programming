#include "main.h"

/**
  * flip_bits - Calculates the number of bits to flip
  * @n: number of bits to be flipped
  * @m: Desired number or bits
  *
  * Return: number of flipped bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
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
