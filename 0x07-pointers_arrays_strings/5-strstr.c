#include "main.h"
#include <stdio.h>

/**
 * _strstr - function in use
 * Description: locates a substring
 * @haystack: string from which occurance is checked
 * @needle: substring to be checked
 * Return: substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	/* return haystack if given string is empty*/
	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++
	}
	return ('\0');
}
