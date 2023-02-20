#include <stdio.h>

/**
 * main - entry point
 * Description - prints alphabet in both lower and upper cases
 * Return: 0
 */

int main(void)
{
	char ch = 'a';
	char cH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}
	putchar('\n');
	return (0);
}
