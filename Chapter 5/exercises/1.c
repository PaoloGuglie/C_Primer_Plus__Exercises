#include <stdio.h>
#include <stdbool.h>

#define MINUTES_IN_HOUR 60

int main(void)
{
  int time = 0;

  printf("Tell me the number of minutes:\n");

  while (true)
  {
    printf("    - ");
    scanf("%d", &time);

    if (time < 0)
    {
      break;
    }

    printf("Your time is equivalent to %d hours and %d minutes!\n",
    time / MINUTES_IN_HOUR, time % MINUTES_IN_HOUR);
  }

  return 0;
}