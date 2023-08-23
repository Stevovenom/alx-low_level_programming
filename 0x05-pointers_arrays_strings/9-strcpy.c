#include "main.h"
/**
 * _strcpy - it is a pointer that points to  char_type
 * @dest: its a string one pointer to a points character type
 * @src: its a string two pointer that points to a character
 * Return: it returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
