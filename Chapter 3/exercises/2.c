#include <stdio.h>

int main(void)
{
  char ch;

  printf("Enter an ASCII code value.  - ");
  scanf("%d", &ch);

  printf("Your character is %c", ch);

  return 0;
}