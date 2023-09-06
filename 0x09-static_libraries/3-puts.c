#include "main.h"
/**
 * _puts - prints out a string to the standard output
 * @str: the string whose contents are to be printed to the standard output
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
