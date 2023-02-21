#include "main.h"

/**
 * print_sign - entry point
 * @n: the integer value
 * Return: 1 if positive, -1 if negative and 0 otherwise
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
