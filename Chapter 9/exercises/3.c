#include <stdio.h>

void get_input(char *, int *, int *);

void display_input(char, int, int);

int main(void)
{
  char ch;
  int reps_on_line, lines;

  get_input(&ch, &reps_on_line, &lines);

  display_input(ch, reps_on_line, lines);

  return 0;
}

void get_input(char *ch, int *x, int *y)
{
  printf("\nEnter a character and two values:  - ");

  while (scanf("%c %d %d", ch, x, y) != 3)
  {
    printf("Wrong input!");

    while (getchar() != '\n');

    printf("\nEnter a character and two values:  - ");
  }
}

void display_input(char ch, int x, int y)
{
  for (int i = 0; i < y; i++)
  {
    for (int j = 0; j < x; j++)
    {
      putchar(ch);
    }

    printf("\n");
  }
}