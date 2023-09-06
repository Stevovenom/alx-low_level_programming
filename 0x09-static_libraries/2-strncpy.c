#include "main.h"
/**
 * _strncpy - it copies a string from src to the dest
 * @dest: the pointer to which the src will be copied to
 * @src: the source pointer that will be copied to dest
 * @n: The number of elements to be copied
 * Return: should be the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
