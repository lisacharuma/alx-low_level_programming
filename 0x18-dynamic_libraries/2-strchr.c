#include "main.h"
#include <stdio.h>

/**
 * _strchr - method in use
 * Description: locates a character in a string
 * @s: character pointer
 * @c: character
 * Return: character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
