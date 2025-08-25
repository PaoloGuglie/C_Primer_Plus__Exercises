#include <stdio.h>

#define STLEN 14

int main(void)
{
  // Allocate space for string
  char words[STLEN];

  // First
  puts("Enter a string, please");

  fgets(words, STLEN, stdin);

  printf("Your string twice (puts(), then fputs()):\n");

  puts(words);
  fputs(words, stdout);

  // Second
  puts("Enter another string, please");

  fgets(words, STLEN, stdin);

  printf("Your string twice (puts(), then fputs()):\n");

  puts(words);
  fputs(words, stdout);

  // End
  puts("done!");
}