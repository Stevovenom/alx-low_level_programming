#include <stdio.h>

/**
 * main - to display hexadecimal numbers, the base of 16
 *
 * Return: its always 0 showing  success
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
