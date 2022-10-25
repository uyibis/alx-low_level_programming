#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev - Prints a string in reverse order
 *@t: String to reverse
 *Return: Nothing
 */

void print_rev(char *t)
{
  int len = strlen(t);

  while (len--)
    putchar(*(t + len));
  putchar(10);
}
