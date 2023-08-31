#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be searched
 * Return: pointer to the beginning of located substring,NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
