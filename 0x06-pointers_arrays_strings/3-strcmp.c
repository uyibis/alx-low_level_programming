#include "main.h"



/**
 *_strcmp - a function that compares two strings
 *
 * @s1: The function of strings
 * @s2: The function of strcmp
 *
 * Return: Always 0.
 */



int _strcmp(char *s1, char  *s2)
  
{
  
  int x, output;
  

  
  x = 0;
  

  
  while (*(s1 + x) == *(s2 + x) && *(s2 + x) && *(s1 + x) != '\0')
    
    x++;
  
  output = (*(s1 + x) - *(s2 + x));
  
  return (output);  
}

