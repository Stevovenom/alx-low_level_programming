#include "main.h"
/**
 * _isdigit - runs through ascii of 0 and 9
 * @c: the reference character
 * Return: shows 1 if true
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
