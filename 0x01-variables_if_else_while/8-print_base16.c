#include <stdio.h>
/**
 * main - to print hexadecimal numbers, numbers to base 16
 *
 * Return: is 0 showing success
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
