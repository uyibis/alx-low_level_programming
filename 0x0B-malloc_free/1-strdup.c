#include "main.h"

/**

 * _strdup - function pointing to new copied memory allocation
 * @str: string to be copied
 * Return: pointer to new memory location, Null otherwise
 **/

char *_strdup(char *str)
  
{
  
  char *c;
  
  int len = 0;
  
  int i;
  

  
  if (str == NULL)
    
    return (NULL);
  
  while (str[len])
    
    len++;
  
  c = malloc(sizeof(char) * (++len));
  
  if (c == NULL)
    
    return (NULL);
  
  for (i = 0; i < len - 1; i++)
    
    c[i] = str[i];
  
  return (c);
  
}
