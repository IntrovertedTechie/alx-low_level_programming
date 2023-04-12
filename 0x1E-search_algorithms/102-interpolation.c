#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if it is not present
 *         in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%u] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%u] is out of range\n", pos);
	return (-1);
}
