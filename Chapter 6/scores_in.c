#include <stdio.h>

#define SIZE 10
#define PAR 72

int main(void)
{
  int score[SIZE];
  int sum = 0;
  float average;

  printf("Enter %d golf scores:\n", SIZE);
  
  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &score[i]);
  }

  printf("The scores read in are  as follows:\n");

  for (int i = 0; i < SIZE; i++)
  {
    printf("%5d", score[i]);
  }
  printf("\n");

  for (int i = 0; i < SIZE; i++)
  {
    sum += score[i];
  }

  average = (float) sum / SIZE;

  printf("Sum of scores = %d, average = %.2f\n", sum, average);

  return 0;
}