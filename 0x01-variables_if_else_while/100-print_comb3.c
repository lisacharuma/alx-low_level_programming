#include <stdio.h>

/**
 * main - entry point
 * Description: combinations of numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
