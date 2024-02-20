#include "sort.h"
/**
 * swap - swaps two pointers
 * @array: array to be printed
 * @size: size of the array to be printed
 * @x: value to be swapped
 * @y: value to be swapped
 * Return: Nothing
*/
void swap(const int *array, size_t size, int *x, int *y)
{
	if (*x != *y)
	{
		*x = *x + *y;
		*y = *x - *y;
		*x = *x - *y;

		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - divides the array into partitions using the
 * last elements as a pivot
 * @array: array to be partitioned
 * @size: size of the array
 * @low: lower index
 * @high: higher index
 * Return: int number
*/
size_t lomuto_partition(int *array, size_t size, size_t low, size_t high)
{
	int i, j, pi = array[high];


	for (i = j = low; j < high; j++)
	{
		if (array[j] < pi)
		{
			swap(array, size, &array[j], &array[i++]);
		}
	}
	swap(array, size, &array[i], &array[high]);

	return (i);
}
/**
 * quickSortup - sorts array in an ascending order using
 * quick sort algorithm
 * @array: array of ints to be sorted
 * @size: size of the array
 * @low: lower limit size
 * @high: higher limit size
 * Return: Nothing
*/
void quickSortup(int *array, size_t size, size_t low, size_t high)
{
	if (low < high)
	{
		size_t pi_ind = lomuto_partition(array, size, low, high);

		quickSortup(array, size, low, pi_ind - 1);
		quickSortup(array, size, pi_ind + 1, high);
	}
}
/**
 * quick_sort - sorts array in an ascending order using
 * quick sort algorithm
 * @array: array of ints to be sorted
 * @size: number of elements in the array
 * Return: Nothing
*/
void quick_sort(int *array, size_t size)
{
	quickSortup(array, size, 0, size - 1);
}

