#include "main.h"

/**
 * _islower - entry point
 * @c: the integer value
 * Return: 1 if letter is lowercase and  0 if otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
