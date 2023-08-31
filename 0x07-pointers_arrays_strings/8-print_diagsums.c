#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to an integer type
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 1;
	int sum = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum = sum + a[(size + 1) * i];
		sum2 = sum2 + a[(size - 1) * j];
		j++;
		i++;
	}

	printf("%d, %d\n", sum, sum2);
}
