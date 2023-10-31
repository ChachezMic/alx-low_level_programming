#include "main.h"
/**
 * read_textfile - reads a file and
 *                prints it to the standard output
 * @filename:name of file to be read
 * @letters:the amount of letters to be read
 * Return:actual no of ltrs read and printed otherwise(0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t wrt, rl;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)

		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	rl = read(fd, buf, letters);

	wrt = write(STDOUT_FILENO, buf, rl);

	close(fd);

	free(buf);
	return (wrt);
}
