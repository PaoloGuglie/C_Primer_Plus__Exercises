#include <stdio.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)
{
  int choice;

  while ( (choice = get_choice()) != 'q')
  {
    switch (choice)
    {
      case 'a':
          printf("Buy low sell high!\n\n");
          break;
      
      case 'b':
          putchar('\a');
          break;

      case 'c':
          count();
          break;

      default:
          printf("Program error!\n");
          break;
    }
  }

  printf("Bye!\n");

  return 0;
}

void count(void)
{
  printf("Count how far? Enter an integer:\n");

  int n = get_int();

  for (int i = 0; i <= n; i++)
  {
    printf("  - %d\n", i);
  }

  // Clear input
  while (getchar() != '\n');
}

char get_choice(void)
{
  printf("Enter the letter of you chioce:\n");
  printf("a. advice             b. bell\n");
  printf("c. count              q. quit\n");

  int ch = get_first();

  while ( (ch < 'a' || ch > 'c') && ch != 'q')
  {
    printf("Please respond with a, b, c or q.\n");
    ch = get_first();
  }

  return ch;
}

char get_first(void)
{
  int ch = getchar();

  // Clear the input line
  while ( getchar() != '\n');

  return ch;
}

int get_int(void)
{
  int input;
  char ch;

  while (scanf("%d", &input) != 1)
  {
    while (ch = getchar() != '\n');

    printf(" is not an integer.\n Please enter an");
    printf("integer value.");
  }

  return input;
}