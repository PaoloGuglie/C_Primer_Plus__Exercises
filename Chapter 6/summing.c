#include <stdio.h>

int main(void)
{
  long num, sum = 0L;

  printf("Please enter an integer to be summed.\n");
  printf("(q to quit)  - ");

  while (scanf("%ld", &num) == 1)  // incorporate scan into test condition.
  {                                // scanf() returns the number of items successfully read.
    sum += num;
    printf("Please enter the next integer:  - ");
  }

  printf("Those integers sum to %ld", sum);

  return 0;
}