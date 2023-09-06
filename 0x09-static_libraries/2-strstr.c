include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the pointer to the string of character type
 * @c: the character to be searched for
 * Return: Returns pointer to first occurrence of the character c in string s
 * - or NULL if the charactr is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
