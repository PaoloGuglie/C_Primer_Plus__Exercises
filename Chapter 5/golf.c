#include <stdio.h>

int main(void)
{
  int jane, tarzan, cheeta;
  cheeta = tarzan = jane = 68;  // accepted in C (assignments are made right to left).

  printf("                   cheeta    tarzan   jane\n");
  printf("First round score: %4d %8d %8d\n", cheeta, tarzan, jane);

  return 0;
}