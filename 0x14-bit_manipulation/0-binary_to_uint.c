#include "main.h"

/**
 * binary_to_uint -it converts a bin no to unsigned int
 * @b: binary
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int ln, base_2;

	if (!b)
		return (0);

	i = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, base_2 = 1; ln >= 0; ln--, base_2 *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			i += base_2;
		}
	}

	return (i);
}
