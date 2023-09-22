#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry point
 * @ac: input of int
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *pstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	pstr = malloc(sizeof(char) * l + 1);
	if (pstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		pstr[k] = av[i][j];
		k++;
	}
	if (pstr[k] == '\0')
	{
		pstr[k++] = '\n';
	}
	}
	return (pstr);
}

