#include <stdio.h>

/**
 * main - entry point
 * Description - prints all numbers on a new line from 0 to 10
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
