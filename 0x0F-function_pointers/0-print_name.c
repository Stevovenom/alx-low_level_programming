#include "function_pointers.h"
/**
 * print_name - the function prints out a name
 * @name: the name to the people being referred to
 * @f: the pointer to holder for the name
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
