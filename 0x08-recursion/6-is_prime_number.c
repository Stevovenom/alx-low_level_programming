#include "main.h"
/**
 * consta_prime - looks for the multipliers for n
 * @n: base number
 * @i: The iteration number
 * Return: 1 if n is a prime, 0 otherwise
 */
int consta_prime(int n, int i)
{

	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (consta_prime(n, i + 1));
}
/**
 * is_prime_number - checks if n is a prime number
 * @n: Its the base number which is being checked
 * Return: 1 if n s a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (consta_prime(n, 2));
}
