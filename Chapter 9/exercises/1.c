#include <stdio.h>

void get_input(double *, double *);

double min(double, double);

int main(void)
{
  double first_number, second_number;

  get_input(&first_number, &second_number);
  
  printf("The smallest number between %.1lf and %.1lf is %.1lf.\n",
  first_number, second_number, min(first_number, second_number));

  return 0;
}

void get_input(double *x, double *y)
{
  printf("\nEnter two numbers:  - ");

  while (scanf("%lf %lf", x, y) != 2)
  {
    printf("Wrong input!");

    // get the unused input
    while (getchar() != '\n');

    printf("\nEnter two numbers:  - ");
  }
}

double min(double x, double y)
{
  return x < y ? x : y;
}