#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * @str: The string to be duplicated
 * Return: pointer to the duplictaed string
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *c;

	len = 0;

	if (str == 0)
		return (NULL);

	while (str[len] != 0)
		len++;

	c = malloc((len + 1) * sizeof(*c));

		if (c == NULL)
			return (NULL);

	for (i = 0; i <= len; i++)
		c[i] = str[i];

	return (c);
}
