#include <unistd.h>
/**
 * _putchar - writes the character c to the stdoutput
 * @c: the character to be written to the std output
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
