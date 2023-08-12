#include <stdio.h>
/**
 * main - prints all combinations of single--bit-digits
 *
 * Return: always 0 to show success
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num <= '8')
		{
			putchar(',');
			putcahr(',');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
