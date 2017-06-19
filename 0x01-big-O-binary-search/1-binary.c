#include <stdio.h>

/**
 * print_array - prints array
 *
 * @array: array to be printed
 * @left: index to start printing at
 * @right: index to end printing at
 *
 */
void print_array(int *array, int left, int right)
{
	int i;

	i = left;
	printf("Searching in array: ");
	while (i < right)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches array using binary search algorithm
 *
 * @array: pointer to first element of array sorted in ascending order
 * @size: number of elements in array
 * @value: value to search array for
 * return: array index of value if found, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int right;
	int left;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	i = right / 2;
	while (i >= 0)
	{
		print_array(array, left, right);
		if (array[i] == value)
			return (i);
		if (value > array[i])
		{
			if (size - i == 1)
				return (-1);
			left = i + 1;
			right = size - 1;
			i = (i + size) / 2;
		}
		else if (value < array[i])
		{
			left = 0;
			right = i;
			i = i / 2;
		}
	}
	return (-1);
}
