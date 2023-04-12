#include "search_algos.h"

/**
 * linear_search - performs linear search
 * @array: the integer array to check
 * @size: array size
 * @value: value to search for in the array
 *
 * Return: the index found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
