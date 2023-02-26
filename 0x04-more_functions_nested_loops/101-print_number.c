#include "main.h"

/**
 * print_number - entry point
 * Description: prints integers
 * @n: Integer
 * Return: integer
 */

void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
