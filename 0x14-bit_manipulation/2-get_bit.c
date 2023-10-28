#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the character whose value is to be returned
 * @index: the position of the character
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return ((n & 1));
}
