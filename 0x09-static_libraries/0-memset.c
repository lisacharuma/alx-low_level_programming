#include "main.h"

/**
 * _memset - new function name
 * @s: pointer to the char parameter
 * @b: the data to be changed
 * @n: the index
 * Return: string pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
