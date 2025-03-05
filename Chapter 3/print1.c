#include <stdio.h>

int main(void)
{
  int ten = 10, two = 2;

  printf("Doing it right: %d minus %d is %d.\n", ten, 2, ten - two);
  
  // This second time the program will use whatever values happen to be lying
  // around in memory each time the program runs.
  printf("Doing it wrong: %d minus %d is %d.\n", ten);

  return 0;
}