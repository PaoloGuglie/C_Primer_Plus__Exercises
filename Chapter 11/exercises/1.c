#include <stdio.h>

#define SIZE 25

void get_input(char *, int);

int main(void)
{
  char my_string[SIZE];

  printf("Hello, please enter a line, I will store the first %d characters:", SIZE);
  printf("  - ");

  get_input(my_string, SIZE);

  puts("Here's your string:");
  puts(my_string);

  return 0;
}

void get_input(char *string, int n)
{
  // Get the string
  fgets(string, n, stdin);

  // Dispose of the rest of the input line
  while (getchar() != '\n');
}