#include "main.h"
/**
 * _strlen -  count
 * @s: checked
 * Return: nothing
 */
int _strlen(char *s)
{

	int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len++;
	}
	return (len);
}
/**
 * rev_string- reverse
 * @s:points to the string
 * Return:void
 */
void rev_string(char *s)
{
	int strsize = _strlen(s);
	int i;

	char c;

	i = 0;

	while (i < (strsize / 2))
	{
		c = *(s + i);
		*(s + i) = *(s + strsize - 1 - i);
		*(s + strsize - 1 - i) = c;
		i++;
	}
}
