#include "main.h"
/**
 * _abs - Entry point
 * description:computes absolute value of an integer
 * @c:character to be computed
 * Return:Absolute value of a number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
