#include "sort.h"

/**
 * selection_sort - sorts an array following the selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, mn;

	register int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		mn = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mn])
				mn = j;
		}
		tmp = array[i];
		array[i] = array[mn];
		array[mn] = tmp;
		if (i != mn)
			print_array(array, size);
	}
}
