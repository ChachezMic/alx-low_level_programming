#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: no. of letters to be read
 * Return: w- actual no. of bytes read and printed
 * otherwise  NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(f, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(f);
	return (w);
}
