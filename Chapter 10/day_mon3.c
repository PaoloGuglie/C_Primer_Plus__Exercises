#include <stdio.h>

#define MONTHS 5

int main(void)
{
  int days[MONTHS] = {31, 28, 31, 30, 31};

  for (int i = 0; i < MONTHS; i++)
  {
    printf("Month %d has %d days.\n", i + 1, *(days + i));
  }

  return 0;
}