/*
  Print an interger in binary form
*/

#include <stdio.h>

void to_binary(unsigned long);

int main(void)
{
  unsigned long number;
  printf("Enter an interger (q to quit):  - ");

  while (scanf("%lu", &number) == 1)
  {
    printf("Binray equivalent: ");
    to_binary(number);
    putchar('\n');
    printf("Enter an interger (q to quit):  - ");
  }

  printf("Done.\n");

  return 0;
}

void to_binary(unsigned long n)
{
  int result = n % 2;

  if (n >= 2)
  {
    to_binary(n / 2);
  }

  putchar(result == 0 ? '0' : '1');

  return;
}