#include <stdio.h>

#define LETTERS 26

int main(void)
{
  char storage[LETTERS];
  
  // Store the characters
  for (int i = 0; i <= LETTERS; i++)
  {
    storage[i] = 'a' + i;
  }

  // Show the characters
  for (int i = 0; i < LETTERS; i++)
  {
    printf("%c ", storage[i]);
  }

  return 0;
}