#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the pointer to teh bit to be manipulated
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
