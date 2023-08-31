#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the string being changed
 * @to: pointer to the character the string is to be changed to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
