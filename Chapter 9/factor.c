#include <stdio.h>

long fact(int);

long recursive_fact(int);

int main(void)
{
  int num;

  printf("This program calculates factorials.\n");
  printf("Enter a value in the range 0-12 (q to quit)  - \n");

  while (scanf("%d", &num) == 1)
  {
    if (num < 0)
    {
      printf("Only positive numbers, please.\n");
    }

    else if (num > 12)
    {
      printf("Keep input under 13.\n");
    }

    else
    {
      printf("\nloop: %d factorial is %ld\n", num, fact(num));
      printf("Recursion: %d factorial is %ld\n", num, recursive_fact(num));
    }

    printf("Enter a value in the range 0-12 (q to quit)  - ");
  }

  printf("Bye!\n");

  return 0;
}

long fact(int n)
{
  long answer = 1;

  for (; n > 1; n--)
  {
    answer *= n;
  }

  return answer;
}

long recursive_fact(int n)
{
  long answer;

  if (n > 0)
  {
    answer = n * recursive_fact(n - 1);
  }

  else
  {
    answer = 1;
  }

  return answer;
}