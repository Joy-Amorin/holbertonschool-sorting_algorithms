#include "sort.h"

/**
 * partition - function to sort the data and know the pivot
 *
 *@array:array of data to sort
 *@min: left column of the array
 *@max: right column of the array
 *@size: size of the data
 *
 * Return: pivot
 */
int partition(int *array, int min, int max, size_t size)
{
	int pivot = array[max];
	int i = (min - 1);
	int j, tmp;

	for (j = min; j <= max - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (pivot < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[max];
		array[max] = tmp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_recursion - recursion for the quick sort
 *
 *@array:array of data to sort
 *@min: left column of the array
 *@max: right column of the array
 *@size: size of the data
 *
 *Return: void
 */
void quick_recursion(int *array, int min, int max, size_t size)
{
	int pivot;

	if (min < max)
	{
		pivot = partition(array, min, max, size);
		quick_recursion(array, min, pivot - 1, size);
		quick_recursion(array, pivot, max, size);
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order
 *
 *@array:array of data to sort
 *@size: size of the data
 *
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_recursion(array, 0, size - 1, size);
}
