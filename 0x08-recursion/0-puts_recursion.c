include "main.h"

/**
 * _puts_recursion - new function
 * Description: prints a string followed by a new line
 * @s: array of characters (string)
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
	{ /* base case*/
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s); /* prints the first letter */
		_puts_recursion(s + 1); /* run again to print the next letter */
	}
}
