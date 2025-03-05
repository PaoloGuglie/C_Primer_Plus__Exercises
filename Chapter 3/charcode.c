#include <stdio.h>

int main(void)
{
  char ch;

  printf("Please enter a character:  - ");
  scanf("%c", &ch);
  printf("\nThe code for %c is %d.\n", ch, ch);

  return 0;
}