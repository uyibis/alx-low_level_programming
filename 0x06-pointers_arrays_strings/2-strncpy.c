#include "main.h"



/**
 *_strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
  
  int x;
  

  
  x = 0;
  

  
  while (x < n &&  src[x])
    
    {
      
      dest[x] = src[x];
      
      x++;
      
    }
  
  while (x < n)
    
    {
      
      dest[x] = '\0';
      
      x++;
      
    }
  

  
  return (dest); 
}
