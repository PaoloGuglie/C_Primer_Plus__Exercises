#include <stdio.h>

int units = 0;  // an external variable

void critic(void);

int main(void)
{
  extern int units;  // an optional redeclaration

  printf("How many pounds to a firking of butter?\n  - ");
  scanf("%d", &units);

  while (units != 56) critic();

  printf("You must've looked it up!");

  return 0;
}

void critic(void)
{
  // optional "extern int units" redeclaration omitted
  printf("No luck, my friend, try again.\n  - ");
  scanf("%d", &units);
}