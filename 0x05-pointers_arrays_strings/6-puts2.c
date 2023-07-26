#include "main.h"
#include <string.h>

/**
 *puts2- print skip one number
 *@str:checked
 *Return:nothing
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

