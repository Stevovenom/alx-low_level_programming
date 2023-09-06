#include <stdio.h>
/**
 * main - it priints out the all the arguments it receives
 * @argc: holds the counter of the arguments passed in the program
 * @argv: holds array of strings
 * Return: 0 showing success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
