#include "main.h"

/**
 *reverse_array- prints in reverse
 *
 *@a: an array of integers
 *@n: the number of elements to swap
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
  
  int x, y, tp;
  

  
  x = 0;
  

  
  y = n - 1;
  

  
  while (x < y)
    
    {
      
      tp = a[x];
      
      a[x] = a[y];
      
      a[y] = tp;
      
      x++;
      
      y--;
      
    }
  
}

