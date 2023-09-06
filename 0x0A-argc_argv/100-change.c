#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coin to make a change for an amount
 * @argc: the number of command line arguments passed
 * @argv: array that hold the command line argument
 * Return: 0 showing success
 */
int main(int argc, char *argv[])
{
	int cents, mncoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if(cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mncoin += 1;
	}
	printf("%d\n", mncoin);
	return (0);
}
