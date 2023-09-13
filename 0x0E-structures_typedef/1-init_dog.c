#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - input function to the code
 * @d: the new dog struct whose details are being initialized
 * @name: name of the new dog
 * @age: the age of the dog
 * @owner: teh owner to the defined new dog
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
