#include "main.h"

/**
 * _abs - prints the absolute value of integer
 * @a: my chosen character of reference
 * Return: 0 showing success
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	return (a);
}
