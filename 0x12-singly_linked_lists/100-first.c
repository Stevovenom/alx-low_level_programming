#include "lists.h"
void prints_first(void) __attribute__((constructor));
/**
 * prints_first - the function prints first the string given before main given
 * Return: void
 */
void prints_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
