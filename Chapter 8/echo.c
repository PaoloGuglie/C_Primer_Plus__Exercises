/* 
  This program fetches characters from keyboard input and send them to the screen.
  This process is called "echoing the input"
*/

#include <stdio.h>

int main(void)
{
  char ch;

  while ((ch = getchar()) != '#')
  {
    putchar(ch);
  }

  return 0;
}