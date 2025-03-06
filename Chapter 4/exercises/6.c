#include <stdio.h>
#include <string.h>

#define STR_LEN 10

int main(void)
{
  char first[STR_LEN], last[STR_LEN];

  printf("Tell me your first and last name:  - ");
  scanf("%s %s", first, last);
  printf("%10s %10s", first, last);
  printf("\n%10d %10d", strlen(first), strlen(last));

  return 0;
}