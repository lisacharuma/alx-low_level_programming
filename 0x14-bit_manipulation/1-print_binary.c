#include "main.h"

/**
 * print_binary - new function
 * Description: prints binary representation of a number
 * @n: num to get binary representation
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/*find last 1 in binary strin*/
	int counter = 0;

	while ((n >> counter) > 1)
	{
		counter++;
	}
	while (counter >= 0) /*start from the end*/
	{ /*check if bit in current position is set or not*/
		if ((n >> counter) & 1)
			_putchar('1'); /*n was set*/
		else
			_putchar('0'); /*n was not set*/
		counter--; /*move to the previous bit*/
	}
}
