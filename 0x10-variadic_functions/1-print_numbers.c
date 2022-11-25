#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: pointer to the string to be printed between numbers.
 * @n: nmber of integers passed to the function.
 *
 * You are allowed to use printf.
 * If separator is NULL, don’t print it.
 * Print a new line at the end of your function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int i;

	va_start(nm, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nm, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nm);
	printf("\n");
}
