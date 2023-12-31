#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: long  unsigned integer
 * @index: bit index.
 * Return: 1 on success, -1 if it doesnt work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
