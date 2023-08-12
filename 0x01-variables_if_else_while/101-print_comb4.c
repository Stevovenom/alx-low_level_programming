#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: always 0 to show success
 */
int main(void)
{
	int i, j, k;
	int count = 0;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (count != 0)
				{
					putchar(',');
					putchar(' ');
				}

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}
