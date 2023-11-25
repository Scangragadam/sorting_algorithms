#include "sort.h"

/**
 * swap_func - Swap two integers inside array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_func(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorting array of integers in ascending order.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 *
 * Description: Printing array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_func(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}

