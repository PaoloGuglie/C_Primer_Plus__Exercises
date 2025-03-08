#include <stdio.h>

int main(void)
{
  long num, sum = 0L;
  _Bool input_is_good;  // I can also use <stdbool.h> to make bool alias for _Bool .

  printf("Please enter an integer to be summed:");
  printf("(q to quit)  - ");

  input_is_good = scanf("%ld", &num);

  while (input_is_good)
  {
    sum += num;
    printf("Please enter next integer (q to quit):  - ");
    input_is_good = scanf("%ld", &num);
  }

  printf("Those integers sum to %ld.\n", sum);

  return 0;
}