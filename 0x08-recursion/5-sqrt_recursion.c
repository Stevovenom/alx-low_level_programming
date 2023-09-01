#include "main.h"
/**
 * square_root - calculates j**j to check with i
 * @n: base number
 * @j: iterator number
 * Return: return j
 */
int square_root(int n, int j)
{
	if (j * j == n)
		return (n);
	if (j * j <= n)
		return (square_root(n, 2));
	else
		return (-1);
}
#include "main.h"
/**
 * _sqrt_recursion - prints out the natural squareroot of a number
 * @n: the integer whose squareroot is beig calculated
 * Return: The squaroot of the integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square_root(n, 2));
}
