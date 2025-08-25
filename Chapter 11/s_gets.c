#include <stdio.h>

/*
  A function that reads a whole line and replaces the newline character with a null character, or reads
  the part of a line that fits and discards the rest.
*/

char * s_gets(char *st, int n)
{
  char * ret_val;
  int i = 0;

  if (ret_val = fgets(st, n, stdin))
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
      // Clean the rest of the input line
      while (getchar() != '\n' && getchar() != EOF);
    }
  }

  return ret_val;
}

// If fgets() returns NULL, indicating EOF or a read error, s_gets() skips the rest of the processing; otherwise, it replaces
// the newline character with a null character if the former is present in the string and discards the rest of the line.
// It then returns te same value fgets() returns.