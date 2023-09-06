#include <stdio.h>
/**
 * main - prints a name followed by a new line
 * @argc: stores the number of command line arguments passed to the program
 * @argv: array of string containing arguments
 * Return: 0 showing success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
