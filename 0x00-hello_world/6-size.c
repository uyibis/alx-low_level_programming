#include "stdio.h"



/**
 * main - Entry point
 *
 * Return:  0 ->Success
 */



int main(void) 
{
  int size=0;
  size=sizeof(char);
  printf("Size of a char: %ld byte(s)\n", size);
  size=sizeof(int);
  printf("Size of an int: %ld byte(s)\n", size);
  size=sizeof(long int)
  printf("Size of a long int: %ld byte(s)\n", size);
  printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
  printf("Size of a float: %ld byte(s)\n", sizeof(float));
  return (0); 
}
