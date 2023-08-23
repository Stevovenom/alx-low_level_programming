#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: its a pointer that points to a int_type
 * @n: the number of n elements of an array
 * Return: In this case the return is void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
