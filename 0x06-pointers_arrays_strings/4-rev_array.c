#include "main.h"

/**
 * reverse_array - the method that i am creating
 * Description: reverses the order  of an array
 * @a: pointer parameter
 * @n: integer parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
