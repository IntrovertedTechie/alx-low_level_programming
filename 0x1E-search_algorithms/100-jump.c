#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = 0;
    int jump = (int)sqrt(size);

    if (array == NULL)
        return (-1);

    while (right < (int)size && array[right] < value)
    {
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    for (; left <= right && left < (int)size; left++)
    {
        printf("Value checked array[%d] = [%d]\n", left, array[left]);
        if (array[left] == value)
            return (left);
    }

    return (-1);
}

