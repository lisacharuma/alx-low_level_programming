#include "search_algos.h"

#define min(a, b) ((a) < (b) ? (a) : (b))
/**
 * jump_search - uses jump search to search for an int
 * @array: ptr fo first element in an array
 * @size: number of elements in array
 * @value: value to search for
 * Return: value first index or NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev, next, jump;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);
	for (next = 0; next < size && array[next] < value;
				     prev = next, next += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
						       next, array[next]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
	for (; prev <= min(next, size - 1); prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
