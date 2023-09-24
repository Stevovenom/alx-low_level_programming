#include "main.h"
/**
 * string_nconcat - The function concatenates two strings
 * @s1: its the pointer to the fir:xst string where characters are appended to
 * @s2: the pointer to the second string where characters will be appended from
 * @n: the number of characters to be concatenated
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k;

	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
