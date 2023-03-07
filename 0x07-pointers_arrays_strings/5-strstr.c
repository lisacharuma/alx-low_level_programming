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
	for (; haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
