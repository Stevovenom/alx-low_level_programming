#include "main.h"
/**
 * print_binary0 - it prints the binary representation of a number
 * @n: used to determiine the number of binary bit representation
 * Return: null
 */
void print_binary0(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary0(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - it prints the binary representation of a number
 * @n: used to determine the number of binary bit representation
 * Return: null
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_binary0(n);
	}
}
