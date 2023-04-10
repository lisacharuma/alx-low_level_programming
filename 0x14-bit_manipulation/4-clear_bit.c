#include "main.h"

/**
 * clear_bit - new function
 * Description: sets the bit value to 0 at given index
 * @n: ptr to number
 * @index: postion of the bit to be set
 * Return: 1 if successful and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * STEPS
	 * check if index is within bit range
	 * return -1 immediately if not
	 * else, locate given index
	 * Use & to clear the bit
	 * return 1 if success
	 */
	unsigned long int sub;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		sub = ~(1UL << index);
		*n &= sub;

		return (1);
	}
}
