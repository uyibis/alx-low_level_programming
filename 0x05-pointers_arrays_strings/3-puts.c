#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @t: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *t)
{
  int i = 0;

  while (*(t + i) != '\0')
    {
      putchar(*(t + i));
      i++;
    }
  putchar(10);
}
