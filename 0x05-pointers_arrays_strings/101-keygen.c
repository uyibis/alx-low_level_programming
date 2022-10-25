#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: Always 0 (Success)
 **/

int main(void)
{
  int sum;
  char t;

  srand(time(NULL));
  sum = 0;
  while (sum <= 2645)
    {
      t = rand() % 128;
      sum += t;
      putchar(t);
    }
  putchar(2772 - sum);
  return (0);
}
