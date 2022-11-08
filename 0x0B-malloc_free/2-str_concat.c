#include "main.h"

/**
*#tr_concat - function that concatenates two strings.
* @s1: first string
* @s2: second string
* Return: new memory location or null otherwise
 **/

char *str_concat(char *s1, char *s2)
  
{
  
  char *str;
  
  int ln = 0;
  
  int ln1= 0;
  
  int i, j;
  

  
  if (s1 == NULL)
    
    s1 = "";
  
  if (s2 == NULL)
    
    s2 = "";
  
  while (s1[ln])
    
    ln++;
  
  while (s2[ln1])
    
    ln1++;
  
  ln1++;
  
  str = malloc(sizeof(char) * (ln + ln1));
  
  if (str == NULL)
    
    return (NULL);
  
  i = 0;
  
  j = 0;
  
  while (s1[i])
    
    str[j++] = s1[i++];
  
  i = 0;
  
  while (s2[i])
    
    str[j++] = s2[i++];
  
  return (str);
  
}
