#include <stdio.h>

/**
 * Main - Entry point
 *
 * return (0):Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %zc byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zlu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zllu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zf byte(s)\n", sizeof(float));

	return (0);
}
