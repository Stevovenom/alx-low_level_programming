#include "main.h"
/**
 * _strncat - concatenates src to dest
 * @dest: pointer to the destination array
 * @src: pointer to the string to be appended
 * @n: the maximum number of characters  to be appended
 * Return: returns the dest, the resuting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
