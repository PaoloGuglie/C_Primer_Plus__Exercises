#include <stdio.h>
#include <stdbool.h>

#define DAYS_IN_WEEK 7

int main(void)
{
  int days;

  while (true)
  {
    printf("Tell me the number of days:  - ");
    scanf("%d", &days);

    if (days < 0)
    {
      printf("\nGoodbye!");
      break;
    }

    else
    {
      printf("%d days are %d weeks, %d days!\n",
      days, days / DAYS_IN_WEEK, days % DAYS_IN_WEEK);
    }
  }

  return 0;
}