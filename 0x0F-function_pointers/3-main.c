#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function of my code
 * @argc: argument counter
 * @argv: the argument vector
 * Return: 0 showing success
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *c;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	c = (argv[2]);
	j = atoi(argv[3]);

	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*c == '/' && j == 0) || (*c == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(c) (i, j));

	return (0);
}
