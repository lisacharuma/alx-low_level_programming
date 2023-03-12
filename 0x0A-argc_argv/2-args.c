#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints all the arguments that it receives
 * @argc: arguments count
 * @argv: rguments array (arguments vector)
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++) /* start at index 0 to argc count*/
	{
		printf("%s\n", argv[i]); /* printout arg in array plus a new line*/
	}
	return (0);
}
