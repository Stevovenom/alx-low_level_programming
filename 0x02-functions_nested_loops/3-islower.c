#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: character acting as reference
 * Return: outputs 1 for lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
