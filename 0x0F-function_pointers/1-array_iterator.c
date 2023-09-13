#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes given function
 * @array:holds elements of function
 * @size:size of te array
 * @action:function pointer
 * Return:(0) success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
