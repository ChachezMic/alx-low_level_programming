#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: long unsigned integer.
 * @index: index
 *
 * Return:bits value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
