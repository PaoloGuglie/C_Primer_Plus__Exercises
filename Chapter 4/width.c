#include <stdio.h>

#define PAGES 959

int main(void)
{
  printf("*%d*\n", PAGES);
  printf("*%2d*\n", PAGES);  // field will be expanded automatically to fit the number.
  printf("*%10d*\n", PAGES);
  printf("*%-10d*\n", PAGES);

  return 0;
}