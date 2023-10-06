#include "main.h"
/**
 * create_file - Tunction that creates a file.
 * @filename: the pointer to the name of te new file being created
 * @text_content: the pointer to the contents being copied into the new file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	rwr = write(fd, text_content, i);
	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
