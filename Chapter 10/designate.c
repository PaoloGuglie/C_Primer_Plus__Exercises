#include <stdio.h>

#define MONTHS 12

int main(void)
{
  int days[MONTHS] = {31, 28, [4] = 31, 30, [1] = 29};

  for (int i = 0; i < MONTHS; i++)
  {
    printf("%2d %d\n", i + 1, days[i]);
  }

  return 0;
}