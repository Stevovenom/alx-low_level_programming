#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the output of the given input without using printf and puts
 *
 * Return: should display a 1 to show success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
