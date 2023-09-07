#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string
* Return: pointer to the concatenated string, NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *ptS1;
	int length1, length2, totalLength, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);
	totalLength = length1 + length2;

	ptS1 = malloc((totalLength + 1) * sizeof(char));

	if (ptS1 == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		ptS1[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		ptS1[i + j] = s2[j];
	}
	ptS1[i + j] = '\0';
	return (ptS1);
}
