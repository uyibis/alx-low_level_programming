#include "main.h"



/**
 * string_toupper - Changes all lowercase letters to uppercase
 *
 * @s: String to return
 *
 * Return: String
 */



char *string_toupper(char *s) 
{
  
  int x = 0;
  

  

  
  for (x = 0; s[x] != '\0'; x++)
    
    {
      
      if (s[x] >= 65 && s[x] <= 90)
	
	{
	  
	  s[x] = s[x] + 32;
	  
	}
      
      if (s[x] >= 97 && s[x] <= 122)
	
	{
	  
	  s[x] = s[x] - 32;
	  
	}
      
    }
  
  return (s);  
}
