#include "main.h"

/**
 * flip_bits - new function
 * Description: calculates needed bit to flip a number
 * @n: first number
 * @m: second number
 * Return: number of needed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	 * STEPS - NOTE we need a count of differences
	 * Get bit differences between numbers
	 * Loop through the bits by right shifting
	 * Use & to check for differences
	 * for every difference, increment count
	 */
	unsigned int count = 0;
	unsigned long int bits = n ^ m;

	while (bits != 0)
	{
		if (bits & 1) /*there is a difference*/
		{
			count++;
		}
		bits >>= 1; /*move to the next bit*/
	}
	return (count); /*number of bit*/
}
