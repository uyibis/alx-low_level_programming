#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @s: char type pointer
 *
 * Return: pointer
 */


char *cap_string(char *s)
{
  
  int x;
  
  int y;
  
  char ch[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
  

  
  x = 0;
  

  
  while (s[x] != '\0')
    
    {
      
      if (x == 0 && s[x] >= 97 && s[x] <= 122)
	
	{
	  
	  s[x] = s[x] - 32;
	  
	}
      
      y = 0;
      
      while (ch[y] != '\0')
	
	{
	  
	  if (ch[y] == s[x] && (s[x + 1] >= 97 && s[x + 1] <= 122))
	    
	    {
	      
	      s[x + 1] = s[x + 1] - 32;
	      
	    }
	  
	  y++;
	  
	}
      
      x++;
      
    }
  
  return (s); 
}
