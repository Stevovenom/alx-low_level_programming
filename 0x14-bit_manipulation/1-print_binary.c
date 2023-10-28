#include "main.h"
/**
 * binary_printing - the function i used to print tyheh binary number
 * @n: the character whose binary is to be used
 * Return: nul
 */
void binary_printing(unsigned long int n)
{
	if (n == 0)
		return;
	binary_printing(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');

	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - function that prints the binary representation of a number
 * @n: The charactetr whose binary is to be printed
 * Return: nul
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		binary_printing(n);
	}
}
