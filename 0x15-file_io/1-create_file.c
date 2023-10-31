#include "main.h"
/**
 * create_file - creates a file
 * @filename:name of file to create
 * @text_content:content to  be added to the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrt;

	if (!filename)
		return (0);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (!text_content)
		wrt = write(fd, text_content, strlen(text_content));

				if (wrt == -1)

				close(fd);

				return (-1);

				close(fd);

				return (1);
				}
