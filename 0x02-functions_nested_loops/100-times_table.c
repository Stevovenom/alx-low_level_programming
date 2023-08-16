#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table starting 0
 * @n: the reference number to start
 * Return: always 0 showing success
 */
void print_times_table(int n)
{

	if (n < 0 || n > 15)
	{
		return;
	}

	for (int i = 0; i <= n; i++)
	{

		for (int j = 0; j <= n; j++)
		{

			int result = i * j;

			if (j == 0)
			{
				printf("%d", result);
			}
			else
			{
				printf(", %d", result);
			}
		}
		printf("\n");
	}
}
