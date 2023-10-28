#include "main.h"
/**
 * flip_bits - function that returns the number of bits from one to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits one would need to flip from one number to next
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned long int count;
	unsigned long int i;

	count = 0;
	i = 0;

	size = sizeof(n) * 8 - 1;

	while (i <= size)
	{
		if ((n & 1) != (m & 1))
			count++;

		n = n >> 1;
		m = m >> 1;
		i++;
	}

	return (count);
}
