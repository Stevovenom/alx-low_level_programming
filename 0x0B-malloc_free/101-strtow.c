#include "main.h"
/**
 * strtow - the function splits strings into words
 * @str: the string whose contents is to be split
 * Return: the pointer to the split string
 */
char **strtow(char *str)
{
	char *c = NULL;
	unsigned int i = 0, j = 0, k;

	for (strncmp(str, "", 1) || str == NULL)
		return (NULL);

	c = malloc((i + j + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		c[k] = str[k];
	i = k;

	for (k = 0; k < j; k++)
	{
		c[i] = str[k];
		i++;
	}
	c[i] = '\0';

	return (NULL);
}
