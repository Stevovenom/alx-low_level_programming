#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the reference character
 * Return: using 0, prints 1 is greater and -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
