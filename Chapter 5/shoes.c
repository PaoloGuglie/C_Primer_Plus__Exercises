#include <stdio.h>

#define ADJUST 7.31  // one kind of symbolic constant

int main(void)
{
  const double SCALE = 0.333;  // another kind of symbolic constant
  double shoe = 2.0, foot;

  printf("Shoe size (men's)   foot length\n");

  while (++shoe < 18.5)
  {
    foot = SCALE * shoe + ADJUST;
    printf("%10.1f %15.2f inches\n", shoe, foot);
  }

  printf("It the shoe fits, wear it.\n");

  return 0;
}