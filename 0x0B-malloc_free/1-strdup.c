#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - duplicates a string and allocates it a space in memory
 * @str:string to be duplicated
 * Return:pointer to the copied sting
 */
char *_strdup(char *str)
{
	char *ptStr;

	int length, count;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		ptStr = malloc(sizeof(char) * (length + 1))

	if (ptStr == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		ptStr[count] = str[count];
	}
	ptStr[count] = '\0';

	return (ptStr);
}
