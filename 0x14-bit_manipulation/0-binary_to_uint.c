#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b:points to the characters
 * Return:converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	int a, be;

	if (!b)
		return (0);

	r = 0;

	for (a = 0; b[a] != '\0'; a++)
		;

	for (a--, be = 1; a >= 0; a--, be *= 2)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}

		if (b[a] & 1)
		{
			r += be;
		}
	}

	return (r);
}
