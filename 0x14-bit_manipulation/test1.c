#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	unsigned int i;
	unsigned int c;
	unsigned int len;

	len = strlen(b);

	for (c = len-1; c > 0; c--)
	{
		if (b[c] != '0' || b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += a;
		}
		a *= 2;
	}
	return (i);
}
