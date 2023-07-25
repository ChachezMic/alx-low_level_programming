#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s:to be reversed
 * return:void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(*s++);
	{
	for (i = -1; s[i] >= 0; i--)
		_putchar(s[i]);
	}
	_putchar('\n');
}
