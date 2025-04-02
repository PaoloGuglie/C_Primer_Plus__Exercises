// Preprocessor instructions
#include <stdio.h>
#include <string.h>

#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolic, CA 94904"

#define WIDTH 40
#define SPACE ' '

// Function prototyping
void show_n_char(char, int);

int main(void)
{
  int spaces;

  show_n_char('*', WIDTH);
  putchar('\n');

  show_n_char(SPACE, 12);

  printf("%s\n", NAME);

  spaces = (WIDTH - strlen(ADDRESS)) / 2;  // how many spaces to center text
  show_n_char(SPACE, spaces);

  printf("%s\n", ADDRESS);

  show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);

  printf("%s\n", PLACE);

  show_n_char('*', WIDTH);
  putchar('\n');

  return 0;
}

void show_n_char(char ch, int num)
{
  for (int count = 1; count <= num; count++)
  {
    putchar(ch);
  }
}