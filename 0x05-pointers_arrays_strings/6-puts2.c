#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @t: string to print
 **/

void puts2(char *t)
{
  int i;

  for (i = 0; t[i] != '\0'; i++)
    {
      if (i % 2 == 0)
	{
	  _putchar(t[i]);
	}
    }

  _putchar('\n');
}
