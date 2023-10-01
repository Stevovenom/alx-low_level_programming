#include "main.h"
/**
 * clear_bit - The function sets the value of a bit to 0 at a given index.
 * @n: The pointer to the bit to be manipulated
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 1;
	i = i << index;

	if (index > sizeof(unsigned int) * 8 || n == NULL)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = i ^ *n;

	return (1);
}
