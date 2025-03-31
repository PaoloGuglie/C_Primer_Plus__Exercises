#include <stdio.h>
#include <stdbool.h>

int get_input(void);

int main(void)
{
  bool quit = false;

  do
  {
    int total_input = get_input();

    if (total_input == 0)
    {
      printf("Goodbye!");

      quit = true;
    }

    else
    {
      printf("The input consisted of %d characters!\n\n", total_input);
    }
  
  } while (!quit);

  return 0;
}

int get_input(void)
{
  int count = 0;
  int ch;

  printf("Input characters and I will count them (no characters to quit):  - ");

  while ((ch = getchar()) != '\n')
  {
    count++;
  }

  return count;
}