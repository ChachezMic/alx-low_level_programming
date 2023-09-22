#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: no. of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

