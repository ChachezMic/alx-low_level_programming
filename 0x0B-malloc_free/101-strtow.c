#include <stdlib.h>
#include "main.h"
/**
 * count_word - counts the number of words in a string
 * @s: string to evaluate
 * Return: no. of words
 */
int count_word(char *s)
{
	int flag, count, wrd;

	flag = 0;
	wrd = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wrd++;
		}
	}

	return (wrd);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL(Error)
 */
char **strtow(char *str)
{
	char **matx, *temp;
	int i, l = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matx = (char **) malloc(sizeof(char *) * (words + 1));
	if (matx == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matx[l] = temp - c;
				l++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matx[l] = NULL;

	return (matx);
}

