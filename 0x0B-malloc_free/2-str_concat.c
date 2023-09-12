#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: the second string
 * Return: pointer to the new allocated space in  memory space
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int len1, len2;
	int i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (len1 = 0; s1[len1] != 0; len1++)
		;
	for (len2 = 0; s2[len2] != 0; len2++)
		;
	len2++;

	c = malloc(len1 * sizeof(*s1) + len2 * sizeof(*s2));
	if (c == 0)
		return (NULL);
	for (i = 0, j = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			c[i] = s1[i];
		else
			c[i] = s2[j++];
	}
	return (c);
}
