#include "main.h"
/**
 * read_textfile - function that reads textfile and prints to the stdout
 * @filename: the pointer to the filename to be used
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fileread, filewrite;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fileread = read(fd, buffer, letters);
	filewrite = write(STDOUT_FILENO, buffer, fileread);

	close(fd);
	free(buffer);

	return (filewrite);
}
