#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - cancatates two strings
 * @s1:first string
 * @s2:second string
 * @n:number of bytes of s2
 * Return:pointer to newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptS1;
	unsigned int length1, length2, totalLength, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);
	totalLength = length1 + length2;

	if (n >= strlen(s2))
	{
		ptS1 = malloc((totalLength + 1) * sizeof(char));
		if (ptS1 == NULL)
			return (NULL);
	}
	else
	{
		totalLength = (length1 + n);
		ptS1 = malloc((totalLength + 1) * sizeof(char));
		if (ptS1 == NULL)
			return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		ptS1[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptS1[i + j] = s2[j];
	}
	for (j = 0; j < length2; j++)
	{
		ptS1[i + j] = s2[j];
	}
	ptS1[i + j] = '\0';
	return (ptS1);
}
