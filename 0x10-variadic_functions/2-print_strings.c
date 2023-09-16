#include "variadic_functions.h"
/**
 * print_strings - the function prints out the strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);

		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
