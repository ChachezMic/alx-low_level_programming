#include <stdlib.h>

/**
 * *create_array - creates an array of characters
 * size:space to be created by malloc
 * c:character to be placed in the space created
 * Return:a pointer to an array or NULL if size is zero/fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	if (size > 0)
	ptArray = malloc(size * sizeof(char));

			for(count = 0; count < size; count++)
			{
				ptArray[count] = c;
			}
			return (ptArray);
			if (size == 0)
			{
				return (NULL);
			}
			else
			{
				return (NULL);
			}
}

