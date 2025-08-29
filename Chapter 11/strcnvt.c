#include <stdio.h>
#include <stdlib.h>

#define LIM 30

char *s_gets(char *, int);

int main(void)
{
  char number[LIM];
  char *end;
  long value;

  puts("Enter a number (empty line to quit):");

  while (s_gets(number, LIM) && number[0] != '\0')
  {
    value = strtol(number, &end, 10);  // I give the address of a pointer that gets set to the address of the character terminating the input number
    printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",
    value, end, *end);

    value = strtol(number, &end, 16);
    printf("base 16 input, base 16 output: %ld, stopped at %s (%d)\n",
    value, end, *end);

    puts("Next number:");
  }

  puts("Bye!\n");

  return 0;
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