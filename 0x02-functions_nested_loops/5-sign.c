#include "main.h"
/**
 * print_sign - Entry point
 * @n:prints a sign or zero
 * Return:returns 1 for +, 0 for zero, -1 for -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}

	else
	{
		_putchar (48);
		return (0);
	}

}
