#include "main.h"
/**
 * _calloc - The function allocates memory for an array, using malloc
 * @nmemb: represents the number of elements in an array
 * @size: size in bytes of each element
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;

	return (c);
}
