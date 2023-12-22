#include "hash_tables.h"
/**
 * hash_djb2 - The function impleents the djb2 algorithm
 * @str: The string whose algorithm is to be determined or passed
 * Return: the hash to the string whose djb2 algorithm has been determined
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
