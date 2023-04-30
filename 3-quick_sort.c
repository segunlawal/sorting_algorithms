#include "sort.h"

void quickSort(int *array, size_t size, int start, int end);
int pivot_partition(int *array, size_t size, int start, int end);

/**
 * quick_sort - sorts an array in ascending order
 * using the quick sort algorithm
 * @array: unsorted array
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSort(array, size, 0, size - 1);
}

/**
 * quickSort - sorts array
 * @array: unsorted array
 * @size: size of the array
 * @start: starting index of the array
 * @end: last index of the array
 * Return: Nothing
 */
void quickSort(int *array, size_t size, int start, int end)
{
	int pivot;

	if (end <= start)
		return;

	pivot = pivot_partition(array, size, start, end);
	quickSort(array, size, start, pivot - 1);
	quickSort(array, size, pivot + 1, end);
}

/**
 * pivot_partition - places the pivot in the correct position
 * @array: unsorted array
 * @size: size of the array
 * @start: starting index of the array
 * @end: last index of the array
 * Return: Nothing
 */

int pivot_partition(int *array, size_t size, int start, int end)
{
	int i = start - 1;
	int pivot = array[end];
	int j, temp;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	i++;
	temp = array[i];
	array[i] = array[end];
	array[end] = temp;

	return (i);

}
