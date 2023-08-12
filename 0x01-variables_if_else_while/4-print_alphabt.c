#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Return: its always 0 showing its success
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}

