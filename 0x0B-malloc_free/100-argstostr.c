#include "main.h"
/**
 * argstostr - function concatenates all argument strings into a single string
 * @ac: number of arguments
 * @av: pointer to pointer to a character(number of argument array)
 * Return: The concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int len;
	int i, j;
	int a;

	len = 0;
	a = 0;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;

	c = malloc(len * sizeof(char));

	if (c == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c[a++] = av[i][j];
		}
		c[a++] = '\n';
	}
	c[a] = '\n';

	return (c);
}
