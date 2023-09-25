#include "main.h"
/**
 * _realloc - The function that reallocates memory block using malloc and free
 * @ptr: a pointer to a memory block tha was initially allocated using malloc
 * @old_size: an unigned integer that represents the size in bytes
 * @new_size: unsigned integer that represents the new size
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	size_t i, max = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
			return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;

	for (i = 0; i < max; i++)
		s[i] = old[i];
	free(ptr);
	return (s);
}
