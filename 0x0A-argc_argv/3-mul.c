#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: uses the _atoi() to multiply
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3) /* only 3 arguments to be passed*/
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
