#include "main.h"

/**
 * get_bit - new function
 * Description: return value of a bit at a given index
 * @n: num 2 get bit
 * @index: index to get string
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* INDEX must be within number of bits*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /*index out of range*/
	}
	/*right-shift n by index*/
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
