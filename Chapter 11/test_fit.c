#include <stdio.h>
#include <string.h>

#define SLICE_POINT 24

void fit(char *, unsigned int);

int main(void)
{
  char msg[] = "Things should be as simple as possible, but not simpler!";

  puts(msg);

  fit(msg, SLICE_POINT);

  puts(msg);

  puts("More of the string:");

  puts(msg + SLICE_POINT + 1);

  return 0;
}

void fit(char *string, unsigned int size)
{
  if (strlen(string) > size)
  {
    string[size] = '\0';
  }
}