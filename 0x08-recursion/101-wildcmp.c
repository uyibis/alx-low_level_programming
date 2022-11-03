#include "main.h"



int strlen_no_wilds(char *str);

void iterate_wild(char **wd);

char *postfix_match(char *str, char *pf);

int wildcmp(char *s1, char *s2);



/**
 * strlen_no_wilds - Returns the length of a string,
 *                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * Return: The length.
 */

int strlen_no_wilds(char *str)
{
  
  int len = 0, index = 0;
  

  
  if (*(str + index))
    
    {
      
      if (*str != '*')
	
	len++;
      

      
      index++;
      
      len += strlen_no_wilds(str + index);
      
    }
  

  
  return (len);
  
}



/**
 * iterate_wild - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 * @wildstr: The string to be iterated through
 */

void iterate_wild(char **wd)
  
{
  
  if (**wd == '*')
    
    {
      
      (*wd)++;
      
      iterate_wild(wd);
      
    }
  
}



/**
 * postfix_match - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 * @str: The string to be matched.
 * @pf: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */

char *postfix_match(char *str, char *pf)
  
{
  
  int str_len = strlen_no_wilds(str) - 1;
  
  int postfix_len = strlen_no_wilds(pf) - 1;
  

  
  if (*pf == '*')
    
    iterate_wild(&pf);
  

  
  if (*(str + str_len - postfix_len) == *pf && *pf != '\0')
    
    {
      
      pf++;
      
      return (postfix_match(str, pf));
      
    }
  

  
  return (pf);
  
}



/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */

int wildcmp(char *s1, char *s2) 
{
  
  if (*s2 == '*')
    
    {
      
      iterate_wild(&s2);
      
      s2 = postfix_match(s1, s2);
      
    }
  

  
  if (*s2 == '\0')
    
    return (1);
  

  
  if (*s1 != *s2)
    
    return (0);
  

  
  return (wildcmp(++s1, ++s2));
  
}
