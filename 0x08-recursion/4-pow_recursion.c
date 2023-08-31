#include "main.h"
/**
 * _pow_recursion - function that prints out x to the power of y
 * @x: the base number
 * @y: the powet number
 * Return: returns x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
