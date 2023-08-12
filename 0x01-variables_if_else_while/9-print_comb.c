#include <stdio.h>
/**
 * main - prints all combinations of single--bit-digits
 *
 * Return: always 0 to show success
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		if (numbers <= '8')
		{
			putchar(',');
			putchar(',');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
