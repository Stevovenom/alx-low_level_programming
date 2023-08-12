#include <stdio.h>

/**
 * main - prints all single numbers of base 10 but not using char
 *
 * Return: always 0 showng success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
