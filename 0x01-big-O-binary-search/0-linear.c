#include <stdio.h>

/**
 *
 * linear_search - searches array with linear algorithm
 *
 * @array: pointer to first element of array to search through
 * @size: length of array
 * @value: value to search for
 * return: index of value in array if found, else -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int size_copy;

	size_copy = size;
	if (array == NULL)
		return (-1);
	for (i = 0; size_copy > 0; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		size_copy--;
	}
	return (-1);
}
