#include "main.h"



/**
 *rot13- rotate  letters 13 wise
 *@s: source 
 *Return: s
 */

char *rot13(char *s)
{
  

  
  int x, y;
  

  
  char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
  
  char dest[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
  

  

  
  for (x = 0; *(s + x); x++)
    
    {
      
      for (y = 0; y < 52; y++)
	
	{
	  
	  if (src[y] == *(s + x))
	    
	    {
	      
	      *(s + x) = dest[y];
	      
	      break;
	      
	    }
	  
	}
      
    }
  
  return (s);  
}
