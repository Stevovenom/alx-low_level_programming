#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: always 0 to show success
 */
int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
	}
	while (letters <= 'f')
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
