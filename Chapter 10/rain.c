#include <stdio.h>

#define MONTHS 4
#define YEARS 3

int main(void)
{
  const float rain[YEARS][MONTHS] = {
    {4.3, 3.5, 3.8, 4.0},
    {8.5, 8.2, 1.2, 2.3},
    {7.6, 6.1, 7.7, 6.8}
  };
  
  int year, month;
  float total, subtotal;

  printf("YEAR           RAINFALL  (inches)\n");

  // Calculate yearly rainfall:
  for (year = 0, total = 0; year < YEARS; year++)
  {
    // Calculate rainfall for each year and add to total:
    for (month = 0, subtotal = 0; month < MONTHS; month++)
    {
      subtotal += rain[year][month];
    }

    printf("%5d %15.1lf\n", 2010 + year, subtotal);
    total += subtotal;
  }

  printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);

  printf("MONTHLY AVERAGES:\n\n");

  // Calculate monthly average rainfalls
  for (month = 0; month < MONTHS; month++)
  {
    for (year = 0, subtotal = 0; year < YEARS; year++)
    {
      subtotal += rain[year][month];
    }
    
    printf("%4.1f ", subtotal / YEARS);
  }

  printf("\n");

  return 0;
}