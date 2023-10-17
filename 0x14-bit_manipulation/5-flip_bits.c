#include "main.h"

/**
 * flip_bits - returns the no. of bits you might
 * need to flip to get from one no. to another
 * @n: no 1.
 * @m: no 2.
 * Return: no. of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nobts;

	for (nobts = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nobts++;
	}

	return (nobts);
}
