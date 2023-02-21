#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function in use
 * Description - prints the alphabet from a to z
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
