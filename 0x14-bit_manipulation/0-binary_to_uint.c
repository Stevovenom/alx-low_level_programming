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

	a = 2;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (c = len; c > 0; c--)
	{
		if (b[c] != 48 || b[c] != 49)
			return (0);
		if (b[c] == '1')
		{
			i += atoi(b) * a;
		}
		a *= 2;
	}
	return (i);
}
