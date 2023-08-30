#include "main.h"
/**
 * _memset - it fills a memory with a constant byte
 * @s: Th epon=inetr to the memory location
 * @b: The value to be filed to the particular memory location
 * @n: The number of bytes in the memory block which is set
 * Return: return a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
