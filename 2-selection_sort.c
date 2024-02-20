#include "sort.h"
/**
 * selection_sort - prints the array after selection sort is completed
 * @array: array to be sorted
 * @size: length of the array
 * Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t ind = 0;
	int flag = 0;
	int key;

	if (!array || size < 2)
		return;
	while (i < size - 1)
	{
		key = array[i];
		j = i + 1;
		while (j < size)
		{
			if (array[j] < key)
			{
				key = array[j];
				flag = 1;
				ind = j;
			}

			j++;
		}
		if (flag)
		{
			array[ind] = array[i];
			array[i] = key;
			print_array(array, size);
		}
		ind = 0;
		flag = 0;
		i++;
	}
}
