#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: an array of integers
 * @size: number of elements in the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	int swap;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			swap = array[i];
			array[i] = array[min];
			array[min] = swap;
			print_array(array, size);
		}
	}

}
