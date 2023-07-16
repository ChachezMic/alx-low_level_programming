#include <stdio.h>

/**
 * Main - Entry point
 *
 * return (0):Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of int: %u byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %llu byte(s)\n", sizeof(long long int));
	printf("Size of float: %f byte(s)\n", sizeof(float));

	return (0);
}
