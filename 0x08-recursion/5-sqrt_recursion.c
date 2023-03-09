#include "main.h"

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
	return (_sqrt_recursion
