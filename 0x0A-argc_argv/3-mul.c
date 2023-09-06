#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counter to the number of arguments passed
 * @argv: array of string to the arguments passed to the program
 * Return: 0 showing success, 1 for an error
 */
int main(int argc, char *argv[])
{
	int mul;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
