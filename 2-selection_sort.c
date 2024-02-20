#include "sort.h"
/**
 * selection_sort - prints the array after selection sort is completed
 * @array: array to be sorted
 * @size: length of the array
 * Return: Nothing
*/
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t ind = 0;
	int flag = 0;
	int key;

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
	}
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
