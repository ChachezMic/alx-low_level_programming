#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc:counts number of arguments
 * @argv:array of integers
 * Return:0 for sum of +ve integers,1 if args are digits
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int a;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			int num = atoi(argv[a]);

			if (num == 0 && argv[a][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
