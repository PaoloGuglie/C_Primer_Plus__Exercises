// Preprocessor instructions
#include <stdio.h>

// Function prototypes
void interchange(int *, int *);

int main(void)
{
  int x = 5, y = 10;

  printf("Originally, x = %d and y = %d\n", x, y);

  interchange(&x, &y);  // send addressed to function.

  printf("Now, x = %d and y = %d.\n", x, y);

  return 0;
}

void interchange(int *u, int *v)
{
  int temp = *u;  // temp gets the value that u points to.

  *u = *v;
  *v = temp;
}