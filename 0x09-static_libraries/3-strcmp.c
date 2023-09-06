include "main.h"
/**
 * _strcmp - it compares string s1 to s2
 * @s1: denotes the first string to be compared
 * @s2: denotes the second string to be compared
 * Return: 0 if equal, positive if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}

