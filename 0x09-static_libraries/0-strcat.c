#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: The pointer that points to the destination character
 * @src: The pointer that points to the source character
 * Return: The pointer to the destination string, dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
