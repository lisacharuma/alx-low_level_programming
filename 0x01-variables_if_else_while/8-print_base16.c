#include <stdio.h>

/**
 * main - entry point
 * Description - base  in lower case
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	int b;

	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

