#include "main.h"
/**
 * _strspn - it gets the length of a prefix substring
 * @s: initial segment in which length is calculated
 * @accept: it contains the number of bytes to be included
 * Return: number of bytes in initial segment s which consists bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					length++;
			}
		}
		else
			return (length);
	}
	return (length);
}
