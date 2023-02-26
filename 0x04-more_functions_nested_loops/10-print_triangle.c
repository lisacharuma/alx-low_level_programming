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
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= (size - i); j++)
			{
				if (j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
