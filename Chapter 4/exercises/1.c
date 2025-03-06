#include <stdio.h>

#define STR_LEN 20

int main(void)
{
  char first[STR_LEN], last[STR_LEN];

  printf("Tell me your first and last name:  - ");
  scanf("%s %s", first, last);
  printf("You are %s, %s.", last, first);

  return 0;
}