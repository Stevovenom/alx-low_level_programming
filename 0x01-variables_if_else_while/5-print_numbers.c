#include <stdio.h>

/**
 * main - prints all single numbers to base 10 starting from 0
 *
 * Return: is always 0 showing success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
