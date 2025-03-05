#include <stdio.h>

int main(void)
{
  float inches;
  float cent_per_inch = 2.54;

  printf("How tall are you in inches?  - ");
  scanf("%f", &inches);

  printf("You are %.2f centimeters tall.", inches * cent_per_inch);

  return 0;
}