#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the reference integer
 * Return: 0 to show success else otherwise
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
