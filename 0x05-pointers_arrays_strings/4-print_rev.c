#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: integer that points to a char_type
 * Return: shows the reversed string
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
