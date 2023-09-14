#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_opcodes - The function prints the opcode
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: NULL
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);

		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - main header of my code
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: 0 showing success
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
