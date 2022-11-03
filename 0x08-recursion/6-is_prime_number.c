#include "main.h"

int is_divisible(int num, int dv);



/**
 * is_prime_number - Afunction that checks if a number is prime.
 * @x: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */

int is_prime_number(int x)
  
{
  
  int dv = 2;
  

  
  if (x <= 1)
    
    return (0);
  

  
  if (x <= 3)
    
    return (1);
  

  
  return (is_divisible(x, dv));
  
}



/**
 * is_divisible - check if num is divisible
 * @num: the number to be checked
 * @dv: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */

int is_divisible(int num, int dv)
{
  
  if (num % dv == 0)
    
    return (0);
  

  
  if (dv == num / 2)
    
    return (1);
  

  
  return (is_divisible(num, dv + 1));
}
