#include <stdio.h>

/**
 * main - prints the lowercase alphabets in a reverse way
 *
 * Return: its always 0 to show success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
