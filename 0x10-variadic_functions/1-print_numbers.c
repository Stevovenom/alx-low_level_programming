#include "variadic_functions.h"
/**
 * print_numbers - functioon that prints out a given set of numbers
 * @separator: printed out after the last number is chacked
 * @n: the number of arguments
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
}
