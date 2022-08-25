#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: array of ints
 * @size: the size of array
 * @value: the value to search for
 * Return: position or -1 if not found
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int count = 0;

	if (array == NULL)
		return (-1);

	while (count < (int)size)
	{
		if (array[count] == value)
		{
			printf("Value checked array[%d] = [%d]\n", count, array[count]);
			return (count);
		}
		else
			printf("Value checked array[%d] = [%d]\n", count, array[count]);
		count++;
	}
	return (-1);
}
