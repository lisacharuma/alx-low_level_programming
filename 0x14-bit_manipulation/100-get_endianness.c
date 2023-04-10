#include "main.h"

/**
 * get_endianness - new function
 * Description: checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *val = (char *)&num; /*casting &num 2 a char ptr*/

	if (*val)
		return (1);/*small endian*/
	else
		return (0);/*big endian*/
}
