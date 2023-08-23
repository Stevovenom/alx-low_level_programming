#include "main.h"
/**
 * puts_half - it prints out the remainig half of a string
 * @str: serves as the entry point to our string
 * Return: remaining half of the screen
 */
void puts_half(char *str)
{
	int length = 0;
	int half;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length - 1) / 2;

	for (i = (half + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
