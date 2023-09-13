#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for integers
 * @size:No. of elements in an array
 * @cmp:function that compares values
 * @array:holds values to be compared
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	{
	for (i = 0; i <= size; i++)
		if (cmp(array[i]))
		{
			return (i);
		}
	return (-1);
	}
}


