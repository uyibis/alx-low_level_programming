#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @t: the string to be comverted.
 *Return: The integer value of the comverted string.
 */

int _atoi(char *t)
{
  int sn = 1;
  unsigned int num = 0;

  do {
    if (*t == '-')
      {
	sn *= -1;
      }
    else if (*t >= '0' && *t <= '9')
      {
	num = (num * 10) + (*t - '0');
      }
    else if (num > 0)
      {
	break;
      }
  } while (*t++);

  return (num *sn);
}
