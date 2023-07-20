#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * Description: executes and prints
 * Returns:void
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
