#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm.
 * @array: array of numbers to be ordened
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int aux;
	int count = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] < array[j - 1])
			{
				aux = array[j];
				array[j] = array[j - 1];
				array[j - 1] = aux;
				print_array(array, size);
				count++;


			}
		}
	}
}
