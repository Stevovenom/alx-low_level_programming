#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;

	i = 1;

	return (*((char *) &i) + '0');
}
