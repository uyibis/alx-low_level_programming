#include "main.h"

/**
 *_memset - The _memset() function fills
 *@b: constant byte
 *@n:number of byte
 *@src:targe
 *Return: returns new value of target
 */



char *_memset(char b, unsigned int n, char *src)
{
  
  while (n)
    
    {
      
      src[n - 1] = b;
      
      n--;
      
    }
  
  return (src);
  
}
