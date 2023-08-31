#include "main.h"
/**
 * factorial - it returns the factorial of a non-negative number
 * @n: integer whose factorial is to be calculated
 * Return: the result of the factorisation
 */
int factorial(int n)
{

	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
