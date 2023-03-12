#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the number of arguments passed to the program
 * @argc: arguments count
 * @argv: argument vector, array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
