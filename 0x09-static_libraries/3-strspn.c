#include <stdio.h>
#include "main.h"

/**
 * _strspn - new function
 * Description: gets the length of prefix substring
 * @s: character pointer
 * @accept: character
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (value);
		}
	}
	return (value);
}
