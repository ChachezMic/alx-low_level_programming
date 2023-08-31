#include "main.h"
/**
 * _strlen_recursion - measures the length of a string
 * @s:string to be measured
 * Return:length of a string
 */
int _strlen_recursion(char *s)
{
	int size;

	size = 0;

	if (*s)
	{
		size++;

		size += _strlen_recursion(s + 1);
	}

		return (size);
}


