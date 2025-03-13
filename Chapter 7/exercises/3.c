#include <stdio.h>

int main(void)
{
  int num;
  int evens = 0, odds = 0;
  float avg_evens = 0, avg_odds = 0;

  printf("Enter integers, enter 0 to stop:  - ");

  while(scanf("%d", &num) == 1 && num != 0)
  {
    if (num % 2 == 0)
    {
      evens++;
      avg_evens += num;
    }
    else
    {
      odds++;
      avg_odds += num;
    }
  }

  if (evens)
  {
    avg_evens /= evens;
  }
  if (odds)
  {
    avg_odds /= odds;
  }

  printf("Total number of even integers: %d.\nAverage even integers value: %.1f.\n"
        "Total number of odd integers: %d.\nAverage odd integers value: %.1f.",
        evens, avg_evens, odds, avg_odds);

  return 0;
}