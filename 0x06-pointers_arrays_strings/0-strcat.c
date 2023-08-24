#include "main.h"
/**
 * _strcat - concateenates two strings
 * @dest: The pointer that points to destination character type
 * @src: The pointer that points to source character type
 * Return: The pointer to the concatenated string
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
