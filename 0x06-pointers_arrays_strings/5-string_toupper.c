#include "main.h"

/**
 * string_toupper - the new method
 * Description: changes lowercase letters to uppercase
 * @n: the string to be changed
 * Return: char
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
