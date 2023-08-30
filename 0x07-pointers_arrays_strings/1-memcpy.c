#include "main.h"
/**
 * _memcpy - it copies the memory area
 * @dest: The pointer to the destination where bytes will be copided to
 * @src: the pointer to the source bytes
 * @n: the number of bytes to be copied
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
