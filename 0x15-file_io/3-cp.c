#include "main.h"
/**
 * error_check - to check for errors while copying the contents
 * @file_from: the source file from which we are copying from
 * @file_to: the destination file where we are copying into
 * Return: null
 */
void error_check(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't read from %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't write into %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - the beginning of our command
 * @argc: the argument counter for the arguments passed
 * @argv: the ointer to the argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t nchars, filewrite;

	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	error_check(file_from, file_to, argv);
	nchars = 1024;

	while (nchars == 1024)
	{
		nchars = read(file_from, buffer, 1024);

		if (nchars == -1)
			error_check(-1, 0, argv);
		filewrite = write(file_to, buffer, 1024);

		if (filewrite == -1)
			error_check(0, -1, argv);
	}

	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't close fd %d\n", file_from);
		exit(100);
	}

	close_error = close(file_to);

	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't close fd %d\n", file_to);
		exit (100);
	}
	return (0);
}
