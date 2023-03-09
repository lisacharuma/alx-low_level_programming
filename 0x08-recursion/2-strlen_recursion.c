#include "main.h"

/**
 * _strlen_recursion - new function
 * Description: returns the length of a string
 * @s: string
 * Return: int length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case*/
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
