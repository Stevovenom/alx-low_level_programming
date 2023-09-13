#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - the function frees the dog
 * @d: the pointer to the dog being freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
