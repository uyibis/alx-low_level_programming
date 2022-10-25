#include "main.h"

/**
 *swap_int - swaps two integers' values
 *@x: first integer
 *@y: second integer
 *Return: returns nothing
 */

void swap_int(int *x, int *y)
{
  int tmp = *x;

  *x = *y;
  *y = tmp;
}
