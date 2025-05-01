#include <stdio.h>

#define SIZE 5

int sum(int *, int *);

int main(void)
{
  int marbles[SIZE]  = {20, 10, 5, 39, 4};

  long answer = sum(marbles, marbles + SIZE);

  printf("The total number of marbles is %ld.\n", answer);

  return 0;
}

int sum(int *start, int *end)
{
  int total = 0;

  while (start < end)  // end actually points to the location after the final element.
  {
    total += *start;  // add value to total
    start++;  // advance pointer to next element
  }

  return total;
}