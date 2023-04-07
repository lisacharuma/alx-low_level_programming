#include <stdio.h>
#include "lists.h"

void print_line(void) __attribute__ ((constructor));

/**
 * print_line - new function
 * Description: prints a given line
 * Return: void
 */

void print_line(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
