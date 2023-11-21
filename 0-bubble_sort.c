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

	int swap, flag;

	if (array)
	{
		for (i = 0; i < size - 1; i++)
		{
			flag = 0;
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swap;
					flag = 1;
					print_array(array, size);
				}
			}
			if (flag == 0)
				break;
		}
	}
}
