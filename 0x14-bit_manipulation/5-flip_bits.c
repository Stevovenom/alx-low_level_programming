#include "main.h"
/**
 * flip_bits - returns the number of bitsone would need to flip from bit to bit
 * @n: the first number to be compared
 * @m: the second number to be compared
 * Return: retturn the number of bits of the number one would flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;

	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
