#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @t: string to print
 *
 * Return: nothing
 */

void puts_half(char *t)
{
  int i, len = _strlen(t);

  for (i = ((len - 1) / 2) + 1; i < len; i++)
    putchar(*(t + i));
  putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @t: string
 *
 * Return: the length of the given string
 */

int _strlen(char *t)
{
  int len = 0;

  while (*(t + len) != '\0')
    len++;

  return (len);
}
