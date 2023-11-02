#include <stdio.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file from to file to
 * @argc: argument count
 * @argv: an array of string
 * Return: 0 on success otherwise -1 on failure
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	int rd_byts, wrt_byts;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	do {
		rd_byts = read(file_from, buffer, BUFFER_SIZE);
		if (rd_byts == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(file_from);
			close(file_to);
			exit(98);
		}
		if (rd_byts > 0)
		{
			wrt_byts = write(file_to, buffer, rd_byts);
			if (wrt_byts == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(file_from);
				close(file_to);
				exit(99);
			}
		}
	} while (rd_byts > 0);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
