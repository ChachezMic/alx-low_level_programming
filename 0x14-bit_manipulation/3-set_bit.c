#include "main.h"

/**
 * set_bit - sets a bits value  to 1 at an prtclr index
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it worked, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int f;

	if (index > 63)
		return (-1);

	f = 1 << index;
	*n = (*n | f);

	return (1);
}
