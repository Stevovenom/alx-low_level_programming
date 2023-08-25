#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the source array
 * @n: the number of elements to be reversed
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p = a + n - 1;

	while (a < p)
	{
		int temp = *a;
		*a = *p;
		*p = temp;
		a++;
		p--;
	}
}
