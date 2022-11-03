#include "main.h"

int _sqrt(int pre, int root);



/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @x: an input integer
 * Return: The square root of n
 */

int _sqrt_recursion(int x)
{
  
  if (x < 0)
    
    return (-1);
  

  
  return (_sqrt(1, x));
  
}



/**
 * _sqrt - find square root
 * @pre: previous value
 * @root: square root value
 * Return: the square root
 */

int _sqrt(int pre, int root)
{
  
  if (pre > root)
    
    return (-1);
  
  else if (pre * pre == root)
    
    return (pre);
 
  return (_sqrt(pre + 1, root)); 
}
