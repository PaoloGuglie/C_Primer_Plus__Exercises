#include <stdio.h>

int main(void)
{
  const int FREEZING = 0;
  float temperature;
  int cold_days = 0, all_days = 0;

  printf("Enter the list of daily low temperatures.\n");
  printf("Use Celsius, and enter q to quit.\n");

  while (scanf("%f", &temperature) ==1)  // I could also use: while (scanf("%f",&temperature))
  {
    all_days++;

    if (temperature < FREEZING)
    {
      cold_days++;
    }
  }

  if (all_days != 0)  // I could also use: if (all_days)
  {
    printf("%d days total: %.1f%% were below freezing.\n",
    all_days, 100.0 * (float) cold_days / all_days);
  }
  else
  {
    printf("No data entered!\n");
  }

  return 0;
}