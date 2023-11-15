#include "main.h"

/**
 * clear_bit - at a given index a bit is set to 0
 * @n: pointer of a long  unsigned int
 * @index: index of the bit.
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);
	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
