#include "main.h"

/**
 * factorial - new function
 * Description: calculates the factorial of a given number
 * @n: integer argument
 * Return: -1 if unsuccessful, int if successful
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
