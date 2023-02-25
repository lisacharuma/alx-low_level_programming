#include "main.h"

/**
 * print_triangle - entry point
 * Description: prints a triangle
 * @size: size of the triangle
 * Return: integer
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++);
			{
				_putchar(32);
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n')
	}
}
