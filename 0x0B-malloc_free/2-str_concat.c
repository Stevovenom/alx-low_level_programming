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

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	c = malloc((len1 + len2 + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		c[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		c[i] = s2[j];

	c[i] = '\0';

	return (c);
}
