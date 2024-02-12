#include "search_algos.h"

/**
 * interpolation_search - uses interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: value index or NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t next = size - 1;
	size_t pos;

	if (!array)
		return (-1);
	while ((array[next] != array[prev]) &&
				       (value >= array[prev]) && (value <= array[next]))
	{
		pos = prev + (((double)(next - prev) / (array[next] - array[prev]))
							    * (value - array[prev]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			prev = pos + 1;
		else if (value < array[pos])
			next = pos - 1;
		else
			return (pos);
	}
	if (value == array[prev])
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	pos = prev + (((double)(next - prev) / (array[next] - array[prev]))
					     * (value - array[prev]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
