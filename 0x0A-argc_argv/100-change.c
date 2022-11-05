#include <stdio.h>

#include <stdlib.h>



/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */



int main(int argc, char *argv[])
  
{
  
  int cts, cns = 0;
  

  
  if (argc == 1 || argc > 2)
    
    {
      
      printf("Error\n");
      
      return (1);
      
    }
  
  cts = atoi(argv[1]);
  
  while (cts > 0)
    
    {
      
      if (cts >= 25)
	
	cts -= 25;
      
      else if (cts >= 10)
	
	cts -= 10;
      
      else if (cts >= 5)
	
	cts -= 5;
      
      else if (cts >= 2)
	
	cts -= 2;
      
      else if (cts >= 1)
	
	cts -= 1;
      
      cns += 1;
      
    }
  
  printf("%d\n", cns);
  
  return (0);
  
}
