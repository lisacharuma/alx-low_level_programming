#include <stdio.h>

/**
 * main - entry point
 * Description - prints all possible combinations of single digits
 * Return:0
 */

int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
		if (b < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
