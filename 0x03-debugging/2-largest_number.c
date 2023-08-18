#include "main.h"
/**
 * largest_number - prints out the largest between 3 numbers
 * @a: defines the first value input
 * @b: defines the second value input
 * @c: defines the third value input
 * Return: it return the largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
