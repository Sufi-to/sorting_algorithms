#include "sort.h"

/**
 * swap - swaps two integers
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: Nothin
*/

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - implement the bubble sort algo to sort value
 * @array: array to be sorted
 * @size: number of elements in the array
 * Return: Nothin
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				swap(&array[j], &array[j+1]);
				print_array(array, size);
			}
		}
	}
}

