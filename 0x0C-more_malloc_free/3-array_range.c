#include "main.h"
/**
 * array_range - The function creates an array of integers
 * @min: the parameter that represents minimum value range
 * @max: the parameter that represents maximum value range
 * Return: Returns a pointer to an array of integers
 */
int *array_range(int min, int max)
{
	int i, j;
	int *s;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	s = malloc(sizeof(int) * j);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
