#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @c: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*c)(char *))
{
	if (name && c)
		f(name);
}