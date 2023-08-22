#include "main.h"
/**
 * _strlen - it prints out the length of a string
 * @s: variable tha points to a char_type
 * Return: should return the length
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
