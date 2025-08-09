// This programs works only with a fixed-size array

#include <stdio.h>

int largest_int(int [], int);

int main(void)
{
  int arr[] = {1, 2, 54, 6, 87, 4, 9};

  printf("The largest integer in the array is: %d", largest_int(arr, 7));
  
  return 0;
}

int largest_int(int ar[], int len)
{
  int n = 0;

  for (int i = 0; i < len; i++)
  {
    if (ar[i] > n)
    {
      n = ar[i];
    }
  }

  return n;
}