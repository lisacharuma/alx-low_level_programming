#include "main.h"

/**
 * _strncpy - new method
 * Description: copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && scr[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
