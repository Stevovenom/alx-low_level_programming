#include "variadic_functions.h"
/**
 * sum_them_all - functions that returns the sum of all the parameters
 * @n: the number of arguments
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;
	va_start(args, n);

	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return(sum);
}
