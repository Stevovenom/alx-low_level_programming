#include "main.h"
/**
 * _strcpy - its a pointer that points to a char_type
 * @dest: its a string one pointer to the destination
 * @src: its a string two pointer to the sourrce string
 * Return: pointer to dest
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
