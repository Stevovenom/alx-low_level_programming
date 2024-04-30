#include "search_algos.h"
/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: the pointer to the first element
 * @size: the size of the array
 * @value: the value to be searched
 * Return: -1 if value is not present in the array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; i < size && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
