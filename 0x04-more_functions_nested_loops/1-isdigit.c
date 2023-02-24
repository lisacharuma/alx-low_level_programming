#include "main.h"

/**
 * _isdigit - entry point
 * Description: checks if a given character is digit
 * @c: character to be checked
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
