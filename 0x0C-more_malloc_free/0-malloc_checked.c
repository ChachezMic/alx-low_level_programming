#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * *malloc_checked - alloccates memory using malloc
 * @b:number of bytes to be allocated
 * Return:pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}

