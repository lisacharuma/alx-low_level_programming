#include "main.h"

/**
 * _sqrt - entry point
 * Description: natural squareroot
 * @n: integer argument
 * @x: integer argument
 * Return: -1 if negative, n if not
 */

int _sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if (x == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - recursive function
 * Description: finds the natural squareroot of a num
 * @n: int
 * Return: -1 if negative, n if not
 */

int _sqrt_recursion(int n)
{
	int m = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, x));
}
