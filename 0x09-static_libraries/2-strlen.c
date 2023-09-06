#include "main.h"
/**
 * _strlen - it prints out the length of a string
 * @s: variable that points to a char_type
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
