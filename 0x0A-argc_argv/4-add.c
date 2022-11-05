#include <stdio.h>

#include <stdlib.h>



int is_valid_int(char *s);



/**
 * main - adds positive numbers
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 *
 * Return: 0 if successful. 1 if error
 */



int main(int argc, char **argv)
  
{
  
  int i;
  
  int total = 0;
  
  /* if no other arguments are passed */
  
  if (argc < 2)
    
    {
      
      printf("%d\n", 0);
      
      return (0);
      
    }
  
  for (i = 1; i < argc; i++)
    
    {
      
      /* check if the argument is a valid integer */
      
      if (is_valid(argv[i]))
	
	{
	  
	  total += atoi(argv[i]);
	  
	}
      
      else
	
	{
	  
	  printf("Error\n");
	  
	  return (1);
	  
	}
      
    }
  
  printf("%d\n", total);
  
  return (0);
  
}



/**
 * is_valid - checks if a string is a valid integer
 * @src: string
 *
 * Return: 1 is s is a valid integer. 0 otherwise
 */



int is_valid(char *src)
  
{
  
  while (*src)
    
    {
      
      if (*src < '0' || *src > '9')
	
	return (0);
      
      src++;
      
    }
  
  return (1);
  
}
