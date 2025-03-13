#include <stdio.h>

int main(void)
{
  char ch;
  int n_spaces = 0, n_newlines = 0, n_chars = 0;

  printf("Write something:  - ");
  
  while ((ch = getchar()) != '#')
  {
    switch (ch)
    {
      case ' ':
          n_spaces++;
          break;

      case '\n':
          n_newlines++;
          break;

      default:
          n_chars++;
          break;
    }
  }

  printf("You input %d spaces, %d newlines and %d other characters.", n_spaces, n_newlines, n_chars);

  return 0;
}