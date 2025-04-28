#include <stdio.h>

void up_and_down(int);

int main(void)
{
  up_and_down(1);
  
  return 0;
}

/* The %p specifier is used for addresses */
void up_and_down(int n)
// In this example, there are four levels of recursion.
{
  printf("Level %d: n location %p\n", n, &n);  // 1

  if (n < 4)
  {
    up_and_down(n + 1);
  }

  printf("LEVEL %d: n location %p\n", n, &n); // 2
}