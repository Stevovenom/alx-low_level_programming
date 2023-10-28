#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: The pointer to the character to be used
 * @index: the position of the character to be used
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
