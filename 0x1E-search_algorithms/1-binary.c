#include "search_algos.h"

/**
 * binary_search - uses binary search algorithm to search for a value
 * @array: ptr to first element of array to seach
 * @size: array size
 * @value: value to search
 * Return: value index or NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int lowest, mid, highest, i;

	if (array == NULL)
		return (-1);
	lowest = 0;
	highest = size - 1;

	while (lowest <= highest)
	{
		mid = (lowest + highest) / 2;

		printf("Searching in array: ");
		for (i = lowest; i <= highest; i++)
			printf("%i%s", array[i], i == highest ? "\n" : ", ");
		if (array[mid] < value)
			lowest = mid + 1;
		else if (array[mid] > value)
			highest = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
