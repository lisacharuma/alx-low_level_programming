#include "main.h"

/**
 * _strcat- entry point
 * Description: concatenated 2 strings
 * @dest: first character
 * @src: character
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
