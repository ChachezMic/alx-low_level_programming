#include "main.h"
/**
 * int _isalpha - Entry point
 * @c:checks if its alpha
 * Return:1 if its alpha and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c <= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
