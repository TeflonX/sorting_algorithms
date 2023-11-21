#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: pointer to an array
 * @size: size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	int swap;

	if (array)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swap;
					print_array(array, size);
				}
			}
		}
	}
}
