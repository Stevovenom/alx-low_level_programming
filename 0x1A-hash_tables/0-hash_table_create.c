#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - the prototype is used to create a hash table
 * @size: the size of the array to be used in place of the hash table
 * Return: pointer to the newly created hash table, null is unsuccessful
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}		
