#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- sums all its  parameters
 * @n:parameter to be summed
 * Return: 0 if n == 0 otherwise sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nm;
	unsigned int i, tsum = 0;

	va_start(nm, n);

	for (i = 0; i < n; i++)
		tsum += va_arg(nm, int);

	va_end(nm);

	return (tsum);
	if (n == 0)
		return (0);
}
