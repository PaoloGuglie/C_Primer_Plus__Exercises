#include <stdio.h>

#define SIZE 5
#define MULT 3

void show_array(const double ar[], int n);
void multiply_array(double ar[], int n, double mult);

int main(void)
{
  double nums[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

  printf("The original array: ");
  show_array(nums, SIZE);
  
  multiply_array(nums, SIZE, MULT);

  printf("The array after the function: ");
  show_array(nums, SIZE);

  return 0;
}

void show_array(const double ar[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%8.3f ", ar[i]);
  }

  putchar('\n');
}

void multiply_array(double ar[], int n, double mult)
{
  for (int i = 0; i < n; i++)
  {
    ar[i] *= mult;
  }
}