#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 * Description: searches the string for an set of btes
 * @s: string pointer
 * @accept: string to be tested
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
