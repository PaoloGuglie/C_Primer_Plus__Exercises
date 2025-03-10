#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
  char ch, previous_ch;
  long num_chars = 0L;
  int num_lines = 0, num_words = 0, num_partial_lines = 0;
  bool is_in_word = false;  // true if ch is in a word

  printf("Enter text to be analyzed (| to terminate):  - ");
  previous_ch = '\n';

  while ((ch = getchar()) != STOP)
  {
    num_chars++;

    if (ch == '\n')
    {
      num_lines++;
    }

    if (!isspace(ch) && !is_in_word)
    {
      is_in_word = true;  // starting a new word
      num_words++;
    }

    if (isspace(ch) && is_in_word)
    {
      is_in_word = false;  // reached end of word
    }

    previous_ch = ch;  // save character value
  }

  if (previous_ch != '\n')
  {
    num_partial_lines = 1;
  }

  printf("Characters = %ld, words = %d, "
        "lines = %d, partial lines = %d.\n",
        num_chars, num_words, num_lines, num_partial_lines);

  return 0;
}