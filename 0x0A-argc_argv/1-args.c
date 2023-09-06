#include <stdio.h>
/**
 * main - prints out the number of arguments passed out into it
 * @argc: counts the number of command-line arguments
 * @argv: stores the array of strings contaning arguments
 * Return: 0 showing success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
		return (0);
}
