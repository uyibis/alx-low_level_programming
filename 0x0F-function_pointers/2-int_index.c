#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @arr: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used
 * to compare values.
 *
 * Return: index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *arr, int size, int (*cmp)(int))
{
	int i;

	if (arr && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(arr[i]))
				return (i);
	}

	return (-1);
}