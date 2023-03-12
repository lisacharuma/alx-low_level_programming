#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: add positive numbers
 * @argc: arguments count
 * @argv: arguments array (vector)
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0; /* it will increase as more ints are passed*/

	if (argc == 1)
	{
		printf("%d\n", 0); /* no arg passed*/
		return (0);
	}
	for (i = 1; i < argc; i++) /* as long as there r mo than 1 args*/
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j])) /* if arg is !digit*/
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);/*increment sum */
	}
	printf("%d\n", sum);
	return (0);
}
