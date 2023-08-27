#include "main.h"
/**
 * print_number - it prints out an integer
 * @n: the number of elements defined
 * Return: 0 showing success
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
