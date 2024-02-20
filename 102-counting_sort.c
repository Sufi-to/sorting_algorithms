#include "sort.h"
/**
 * counting_sort - sorts array using the counting sort algo
 * @qrray: array to be sorted
 * @size: size of the array
 * Return: None
*/
void counting_sort(int *array, size_t size)
{
	int *carray;
	int max_num = array[0];
	int i = 1;

	if (size < 2)
		return;

	while (i < size)
	{
		if (array[i] > max_num)
			max_num = array[i];
		i++;
	}
	carray = malloc(sizeof(int) * (max_num + 1));
	for (int j = 0; j < max_num; j++)
		carray[j] = 0;


}
