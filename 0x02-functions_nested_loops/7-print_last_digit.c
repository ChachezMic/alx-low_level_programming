#include "main.h"
/**
 * print_last_digit - Entry point
 * @n:number to be treated
 * Return: Value of the last digit of a number
 */
int print_last_digit(int n)
{
	int last digit;

	last digit = n % 10;

	if (last digit < 0)
	{
	
		last digit = last digit * -1;

	}
	_putchar(last digit + '0');

	return (last digit);

}
