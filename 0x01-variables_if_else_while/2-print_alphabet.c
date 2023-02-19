#include <stdio.h>

/**
 * main - entry point
 * Description - Prints alphabet
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(ch);
	return (0);
}
