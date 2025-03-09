#include <stdio.h>

#define SPACE ' '

int main(void)
{
  char ch;

  while ((ch = getchar()) != '\n')
  {
    if (ch == SPACE)
    {
      putchar(ch);
    }
    else
    {
      putchar(ch + 1);
    }
  }

  // Print the newline
  putchar(ch);

  return 0;
}