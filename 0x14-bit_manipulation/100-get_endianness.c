#include "main.h"

/**
 * get_endianness - checks  endianness
 *
 * Return: 0 if bg endian, 1 kids
 */
int get_endianness(void)
{
	unsigned int k;
	char *b;

	k = 1;
	b = (char *) &k;

	return ((int)*b);
}
