#include "main.h"

/**
 * check_match - function
 * Description: checks for match
 * @s1: string
 * @s2: string
 * Return: 1 or 0
 */

int check_match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (check_match(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (check_match(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && check_match(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * wildcmp - function for this question
 * Description: compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	return (check_match(s1, s2));
}
