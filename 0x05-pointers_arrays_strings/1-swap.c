#include "main.h"
/**
 * swap_int - swaps the values of two integers a and b
 * @a: the first data which point to a variable type int
 * @b: the second data which also points to a variable type int
 * Return: value of the swap between a and b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
