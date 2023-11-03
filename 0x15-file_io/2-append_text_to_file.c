#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int filewrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		filewrite = write(fd, text_content, letters);

		if (filewrite == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
