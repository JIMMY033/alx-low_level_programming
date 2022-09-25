#include <stdio.h>

/**
 * _putchar - writes the character c to stdou
 * @c: The character to print
 *
 * Return: Om success 1.
 * On error, -1 is returned, and the errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
