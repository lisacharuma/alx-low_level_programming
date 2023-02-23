#include "main.h"

/**
 * _isupper - entry point
 *Description: checks for uppercase
 * @c: the character to be checked
 * Return: 1 if c is upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c > 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
	}
}
