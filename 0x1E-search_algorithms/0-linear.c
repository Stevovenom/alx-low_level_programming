#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of values
 * @array: array of integers
 * @size: size of the array
 * @value: the value to be searched
 * Return: -1 if the value  is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
