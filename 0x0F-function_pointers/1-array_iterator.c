#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @arr: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *arr, size_t size, void (*action)(int))
{
	unsigned int i;

	if (arr && action)
		for (i = 0; i < size; i++)
			action(arr[i]);
}