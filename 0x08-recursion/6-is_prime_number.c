#include "main.h"

/**
 * is_divisible - helper function
 * Description: checks if the given number is aprime number
 * @n: int argument
 * @div: int argument
 * Return: 1 or 0
 */

int is_divisible(int n, int div)
{
	if (div == 1 || div == n)
	{
		return (0);
	}
	if (n % div == 0)
	{
		return (1);
	}
	return (is_divisible(n, div - 1));
}

/**
 * is_prime_number - task's function
 * Description: checks if n is a prime number
 * @n: integer to be checked
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
		return (1);
	return (!is_divisible(n, n - 1));
}
