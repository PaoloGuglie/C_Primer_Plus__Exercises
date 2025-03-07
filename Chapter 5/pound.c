#include <stdio.h>

void pound(int n);

int main(void)
{
  int times = 5;
  char ch = '!';
  float f = 6.0f;

  pound(times);  // correct type per function prototype
  pound(ch);     // Automatic type cast to convert to int
  pound(f);      // Automatic type cast to convert to int

  return 0;
}

void pound(int n)
{
  while (n-- > 0)
  {
    printf("#");
  }

  printf("\n");
}