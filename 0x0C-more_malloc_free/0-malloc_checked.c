#include "main.h"
/**
 * malloc_checked - The function allocates memory using malloc
 * @b: indicates how much memory is to be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(1);
	}

	return (ptr);
}
