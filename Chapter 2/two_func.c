#include <stdio.h>

// Function prototype
void butler(void);

int main(void)
{
  printf("I will summon the butler function.\n");
  butler();  // Function call
  printf("Yes. Bring me some tea and writeable DVDs.\n");

  return 0;
}

// Function definition
void butler(void)
{
  printf("You rang, sir?\n");
}