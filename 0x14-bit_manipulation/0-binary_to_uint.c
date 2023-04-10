#include "main.h"

/**
 * binary_to_uint - new function
 * Description: converts binary to unsigned int
 * @b: pointer to the binary number
 * Return: converted number or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0; /*sum of powers*/
	unsigned int pwr = 1; /*raise numbers to this power*/
	int binary_len = strlen(b); /*work with binary as a number*/
	int i; /*counter variable*/
	/**
	 * Starting from the last digit down to 0th
	 * Assign each digit a power of 2
	 * Last digit gets 0th power and the 1st get lenth - 1 power
	 * Multiply each digit by its assigned power of 2
	 * Add up the results and return sum
	 */
	for (i = binary_len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			pwr *= 2;
		}
		else if (b[i] == '1')
		{
			sum += pwr;
			pwr *= 2;
		}
		else /*found a number not 1 or 0*/
		{
			return (0);
		}
	}
	return (sum); /*this is the converted num*/
}
