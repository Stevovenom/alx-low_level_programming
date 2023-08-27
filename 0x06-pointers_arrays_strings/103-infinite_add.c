#include "main.h"
/**
 * infinite_add - adds two numbers and stores them in a buffer
 * @n1: first number
 * @n2: second number
 * @r: the result to the sum
 * @size_r: the size of the buffer to which the results would be stored
 * Return: pointer to the results
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0, a = 0, k = 0;
	int b, c, d;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		a = i;
	else
		a = j;
	if (a + 1 > size_r)
		return (0);
	r[1] = '\0';
	for (b = a - 1; b >= 0; b--)
	{
		i--;
		j--;
		if (i >= 0)
			c = n1[i] - '0';
		else
			c = 0;
		if (j >= 0)
			d = n2[j] - '0';
		else
			d = 0;
		r[b] = (c + d + k) % 10 + '0';
		k = (c + d + k) / 10;
	}
	if (k == 1)
	{
		r[a + 1] = '\0';
		if (a + 2 > size_r)
			return (0);
		while (a-- >= 0)
			r[a + 1] = r[a];
		r[0] = k + '0';
	}
	return (r);
}
