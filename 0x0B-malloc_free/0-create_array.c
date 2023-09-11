#include "main.h"
/**
 * create_array - function that creates array of chars initializes it with char
 * @size: size of an array to be created
 * @c: element of an array to be initialized
 * Return: Null if the size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
