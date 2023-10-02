#include "main.h"
/**
 * read_textfile - It reads text file then prints to the POSIX standard output
 * @filename: Its a string poinetr
 * @letters: The number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fd);
	free(buffer);

	return (nwr);
}
