#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the pointer name of the file and text_content
 * @text_content: pointer whose contents is being searched
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		rwr = write(fd, text_content, i);
		if (rwr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
