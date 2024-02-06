#include "search_algos.h"

/**
 * linear_search - uses linear search algorithm to search 4 a val
 * @array: ptr to first element in array to search in
 * @size: array size
 * @value: the value to search for
 * Return: EXIT_SUCCESS or NULL if value is not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
