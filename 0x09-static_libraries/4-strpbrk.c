#include "main.h"
/**
 * _strpbrk - locates thfirst occurence of a string
 * @s: the pointer to the string to be searched
 * @accept: contains the bytes to be searched for
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		
		s++;
	}
	return ('\0');
}
