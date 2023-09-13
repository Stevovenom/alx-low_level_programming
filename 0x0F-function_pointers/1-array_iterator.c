#include "function_pointers.h"
/**
 * array_iterator - the function iterates over each element of an integer array
 * @array: the array we want to iterate over
 * @size: the sizde of the array to be iterated
 * @action: a function pointer that takes an integer as its parameter and returns void
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
