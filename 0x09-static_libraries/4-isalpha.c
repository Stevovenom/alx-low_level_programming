#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be refenced
 * Return: return 1 for lowercase/upper 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
