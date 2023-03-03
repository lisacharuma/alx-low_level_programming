#include "main.h"

/**
 * _strncat - Entry point
 * Description: concatenates two strings
 * @dest: char
 * @src: char
 * @n: integer
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (src != '\0' && n-- > 0)
	{
		p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
