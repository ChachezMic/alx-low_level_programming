#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc:counts number of arguments
 * @argv:array of integers
 * Return:0 for sum of +ve integers,1 if args are digits
 */
int main(int argc, char *argv[])
{
	int sum, i, a, num;
	char *tmp;

	sum = 0;
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			tmp = argv[a];
			for (i = 0; tmp[i] != '\0'; i++)
			{
				if (tmp[i] < 48 || tmp[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(tmp);
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
