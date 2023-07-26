#include "main.h"
/**
 * puts2 - prints every other character of the string
 * @str:string to be checked
 * Return:void
 */
void puts2(char *str)
{
	int i;
	
	for(i = 0; *(str + i) != '\0'; i += 2)
	{
	putchar(str[i]);
	}
	putchar('n\');
}
