#include "main.h"

/**
 *_strlen - returns the length of a string
 * @t: string
 *Return: returns length as integer;
 */

int _strlen(char *t)
{
  int len = 0;

  while (*(t + len) != '\0')
    len++;

  return (len);
}
