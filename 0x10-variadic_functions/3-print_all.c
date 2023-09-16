#include "variadic_functions.h"
/**
 * print_all - the function prints anything
 * @format: a list of types of arguments passed to the function
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *c;

	va_list args;

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				j = 0;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				j = 0;
				break;
			case 's':
				c = va_arg(args, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s", c);
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
