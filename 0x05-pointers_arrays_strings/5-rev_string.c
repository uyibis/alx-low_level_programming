#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @t: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *t)
{
  int i, tmp, len = _strlen(t);

  for (i = 0; i < len / 2; i++)
    {
      tmp = *(t + i);
      *(t + i) = *(t + len - i - 1);
      *(t + len - i - 1) = tmp;
    }
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
