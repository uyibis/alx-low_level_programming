#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its params
 * @n: number of params.
 *
 * If n == 0, return 0.
 *
 * Return: Sum of all its params.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlt;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vlt, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vlt, int);

	va_end(vlt);

	return (sum);
}
