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
	int j;

	for (i = 0; i < n && scr[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
