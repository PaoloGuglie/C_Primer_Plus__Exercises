#include <stdio.h>

int imin(int, int);

int main(void)
{
  int evil1, evil2;

  printf("Enter a pair of integers (q to quit):  - ");

  while (scanf("%d %d", &evil1, &evil2) == 2)
  {
    printf("The lesser of %d and %d is %d.\n",
    evil1, evil2, imin(evil1, evil2));

    printf("Enter a pair of integers (q to quit):  - ");
  }

  printf("bye.\n");

  return 0;
}

int imin(int n, int m)
{
  return n < m ? n : m;
}