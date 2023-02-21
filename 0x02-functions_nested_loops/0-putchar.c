#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description - prints _putchar
 * Return: 0
 */

int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i]; i++)
	{
		putchar(x[i])
	}
	putchar('\n);
	return (0);
}
