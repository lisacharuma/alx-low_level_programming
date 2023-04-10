#include "main.h"

/**
 * set_bit - new function
 * Description: sets bit value to 1 @ given index
 * @n: ptr to number to be changed
 * @index: index of bit to be changed
 * Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * STEPS
	 * first check if index is within n range
	 * return -1 if not
	 * else
	 * locate given index
	 * set bit to 1
	 */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n |= (1 << index);
		return (1);
	}
}
