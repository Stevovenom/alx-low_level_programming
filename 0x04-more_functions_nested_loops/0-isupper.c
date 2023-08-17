#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: The reference character
 * Return: shows 1 if an uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
