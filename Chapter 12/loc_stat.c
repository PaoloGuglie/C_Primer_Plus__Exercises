#include <stdio.h>

void trystat(void);

int main(void)
{
  for (int c = 1; c <= 5; c++) trystat();
}

void trystat(void)
{
  int fade = 1;
  static int stay = 1;

  printf("fade = %d and stay = %d\n", fade++, stay++);
}