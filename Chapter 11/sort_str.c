// Preprocessor instructions
#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20
#define HALT ""

// Function prototypes
void stsrt(char *, int);
char *s_gets(char *, int);

int main(void)
{
  char input[LIM][SIZE];  // Array to store input
  char *ptstr[LIM];  // Array of pointer variables
  int ct = 0;  // Input count

  printf("Input up to %d lines, and I will sort them.\n", LIM);
  printf("T stop, press the Enter key at a line's start\n");

  while (ct < LIM && s_gets(input[ct], SIZE) && input[ct][0])
  {
    ptstr[ct] = input[ct];  // Set pointers to strings
    ct++;
  }

  stsrt(ptstr, ct);

  puts("\nHere's the sorted list:\n");
  for (int k = 0; k < ct; k++) puts(ptstr[k]);  // Sorted pointers

  return 0;
}

void stsrt(char *strings[], int num)
{
  char *temp;

  for (int top = 0; top < num - 1; top++)
  {
    for (int seek = top + 1; seek < num; seek++)
    {
      if (strcmp(strings[top], strings[seek]) > 0)
      {
        temp = strings[top];
        strings[top] = strings[seek];
        strings[seek] = temp;
      }
    }
  }
}

char *s_gets(char *st, int n)
{
  char *ret_val = fgets(st, n, stdin);
  int i = 0;

  if (ret_val)
  {
    while (st[i] != '\n' && st[i] != '\0')
    {
      i++;
    }

    if (st[i] == '\n')
    {
      st[i] = '\0';
    }

    else
    {
      while (getchar() != '\n');
    }
  }

  return ret_val;
}