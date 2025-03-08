#include <stdio.h>

int main(void)
{
  char letter = 'A';

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%c", letter);
      letter++;
    }

    printf("\n");
  }

  return 0;
}