#include <stdio.h>

int main(void)
{
  char ch;
  int n = 0;

  printf("The number is: %d\n", n);

  while ((ch = getchar()) != '#')
  {
    switch (ch)
    {
      case 'a':
      case 'A':
          n++;
          break;

      case 'z':
      case 'Z':
          n--;
          break;

      default:
          n += 10;
    }

    // Skip the rest of the input line
    while (getchar() != '\n');
  }

  printf("The number is now: %d", n);

  return 0;
}