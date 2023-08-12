#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Return: always 0 to show success
 */
int main(void)
{
	int i, j;
	int count = 0;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j)
			{
				if (count != 0)
				{
					putchar(',');
					putchar(' ');
				}

				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
				putchar('0' + j / 10);
				putchar('0' + j % 10);

				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}
