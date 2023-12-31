#include "main.h"
/**
 * create_file - The function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success and -1 oon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int filewrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	filewrite = write(fd, text_content, letters);

	if (filewrite == -1)
		return (-1);

	close(fd);
	return (1);
}
