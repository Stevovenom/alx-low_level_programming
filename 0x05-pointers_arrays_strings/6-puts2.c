#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: it points to the character typr
 * Return: should return the reversed characters
 */
void puts2(char *str)
{
	int longi = 0;
	int i;
	char *s = str;
	int j = 0;

	while (*s != '\0')
	{
		s++;
		longi++;
	}

	j = longi - 1;

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
