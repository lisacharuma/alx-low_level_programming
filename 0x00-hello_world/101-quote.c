#include <stdio.h>

/**
 * main - entry point
 * Description - it prints quote without using puts or printf
 * Return: 1
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", s);
	return (1);
}
