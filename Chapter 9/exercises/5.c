#include <stdio.h>

void get_input(double *, double *);

void larger_of(double *, double *);

int main(void)
{
  double first, second;

  get_input(&first, &second);

  printf("\nThe two numbers are %.2lf and %.2lf", first, second);

  larger_of(&first, &second);

  printf("\nThe two numbers are now %.2lf and %.2lf", first, second);

  return 0;
}

void get_input(double *x, double *y)
{
  printf("\nEnter  two values:  - ");

  while (scanf("%lf %lf", x, y) != 2)
  {
    printf("Wrong input!");

    while (getchar() != '\n');

    printf("\nEnter two values:  - ");
  }
}

void larger_of(double *x, double *y)
/*
  Replace the contents of two double variables
  with the maximum of the two values.
*/
{
  if (*x > *y)
  {
    *y = *x;
  }
  else
  {
    *x = *y;
  }
}