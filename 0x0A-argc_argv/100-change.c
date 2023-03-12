#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * Description: calculates change
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, coins, cents, num_coin;
	int coin_value[] = {25, 10, 5, 2, 1}; /*available coin valz */

	if (argc != 2)
	{
		printf("Error\n"); /* args mst b 2 or more*/
		return (1);
	}
	/* do this for more args mo than 2*/
	cents = atoi(argv[1]); /*convert argv[1] to int cents*/

	if (cents < 0)
	{
		printf("%d\n", 0); /*change can't b < 0*/
		return (0);
	}
	coins = 0;

	num_coin = sizeof(coin_value) / sizeof(coin_value[0]);

	for (i = 0; i < num_coin; i++)
	{
		coins += cents / coin_value[i];

		cents %= coin_value[i];
	}
	printf("%d\n", coins);
	return (0);
}
