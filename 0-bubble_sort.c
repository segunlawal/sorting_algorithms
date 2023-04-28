#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	bool isSorted = false;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
				isSorted = true;
			}
		}
		if (!isSorted)
			return;
	}
}
