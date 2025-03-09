#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;

  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))  // if it is a letter
    {
      putchar(ch + 1);
    }
    else
    {
      putchar(ch);
    }
  }

  // Display the newline
  puchar(ch);

  return 0;
}