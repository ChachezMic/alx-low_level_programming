#include "main.h"
/**
 * append_text_to_file - appends text to a file
 *
 * @filename: name of file to be appended
 * @text_content:content to add to the file
 * Return:1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wrt;
	int fd;
	int ltrsn;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (ltrsn = 0; text_content[ltrsn]; ltrsn++)
			;
		wrt = write(fd, text_content, ltrsn);

		if (wrt == -1)
			return (-1);
	}
	close(fd);

	return (1);
}



