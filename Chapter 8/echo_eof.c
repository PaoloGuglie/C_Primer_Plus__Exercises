#include <stdio.h>

int main(void)
{
  /*
    It is better to have "ch" be a int because char variables may be represented
    by unsigned intergers, but EOF may be -1. That is an impossible value for
    an unsigned char variable, but not for an int. Fortunately, getchar() is 
    type int itself, so it can read the EOF character.
  */

  int ch;

  while ((ch = getchar()) != EOF)
  {
    putchar(ch);
  }

  return 0;
}
