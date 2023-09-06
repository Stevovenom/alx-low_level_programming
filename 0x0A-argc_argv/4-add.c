#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - it adds positive numbers
 * @argc: program counter for the arguments passed
 * @argv: array of strings
 * Return: 0 showing success, 1 else otherwise
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, num;

	if (argc == 1)
{
	printf("0\n");
	return (0);
}

for (i = 1; i < argc; i++)
{
	num = atoi(argv[i]);

if (num <= 0)
{
	printf("Error\n");
	return (1);
}

sum += num;
}
printf("%d\n", sum);
return (0);
}
