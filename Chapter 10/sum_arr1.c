#include <stdio.h>

#define SIZE 5

int sum(int [], int);

int main(void)
{
  int marbles[SIZE] = {20, 10, 5, 39, 4};

  long answer = sum(marbles, SIZE);

  // Print the size of the array:
  printf("The size of marbles is %zd bytes.\n\n", sizeof marbles);

  printf("The total number of marbles is %ld.\n", answer);

  return 0;
}

int sum(int arr[], int n)
{
  // Print the size of the pointer:
  printf("\nThe size of the pointer is %zd bytes.\n\n", sizeof arr);

  int total = 0;

  for (int i = 0; i < n; i++)
  {
    total += arr[i];
  }

  return total;
}