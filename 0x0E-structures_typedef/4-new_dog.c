#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - pointer to the new dog's details to be included
 * @name: the name to the new dog to be included
 * @age: the age to the new dog
 * @owner: the details of the owner to the new_dog
 * Return: the details to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);

	if (new_dog->name ==NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);

	if (new_dog->owner ==NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
