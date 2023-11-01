#include <stdio.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - Entry fo copying file to another destination
 * @argc: argument  count
 * @argv: array of strings with args
 * Return: 0 on success Otherwise 1 or -1
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int file_fro, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t rd_bytes, wrt_bytes;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Error: Usage: %s file_from file_to\n", argv[0]);
				exit(97);

				file_fro = open(argv[1], O_RDONLY);
				if (file_fro == -1)

				dprintf(STDERR_FILENO, "Error:  cant read file fro %s\n", argv[1]);
				exit(98);

				file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
				if (file_to == -1)

				dprintf(STDERR_FILENO, "Error: cant write to file_to %s\n", argv[2]);
				close(file_to);
				exit(99);
				do

				{

				rd_bytes = read(file_fro, buffer, BUFFER_SIZE);

				if (rd_bytes == -1)
					dprintf(STDERR_FILENO, "Error: cant read file_fro %s\n", argv[1]);
				break;

				if (rd_bytes > 0)
					wrt_bytes = write(file_fro, buffer, rd_bytes);
				if (wrt_bytes == -1)
					dprintf(STDERR_FILENO, "Error: cant write to %s\n", argv[2]);
				break;
				}

				while (rd_bytes > 0)
					;
				{
					if (close(file_fro) == -1 || close(file_to) == -1)
						dprintf(STDERR_FILENO, "Error: cant close files\n");
					exit(100);
				}
				return (0);
}
