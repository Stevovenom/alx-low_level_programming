#include <stdio.h>
/**
 * main - prints all combinations of single--bit-digits
 *
 * Return: always 0 to show success
 */
int main(void)
{
	int i;

	for (i = 48; n < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
