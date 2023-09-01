#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to be used to print the length
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * pal_checker - checks if s is a palindrome
 * @s: The pointer to a character type
 * @i: the first integer declaration for left index
 * @j: the second integer declaration for right index
 * Return: returns a 1 if s is a palindrome or 0 otherwise
 */
int pal_checker(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + pal_checker(s, i + 1, j - 1));
	}
	return (0);
}
/**
 * is_palindrome - the functiono checks if s is a palindrome
 * @s: pointer to a character type
 * Return: 1 if n is prime, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
