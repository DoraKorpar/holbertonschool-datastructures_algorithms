#include <stdio.h>

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
