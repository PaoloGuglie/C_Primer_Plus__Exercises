#include <stdio.h>

#define ROWS 3
#define COLS 4

void sum_rows(int ar[][COLS], int rows);  // The empty brackets identify ar as being a pointer
void sum_cols(int [][COLS], int );  // ok to omit names
int sum_2d(int (*ar)[COLS], int rows);  // another syntax

int main(void)
{
  int junk[ROWS][COLS] = {
    {2, 4, 6, 8},
    {3, 5, 7, 9},
    {12, 10, 8, 6} };

  sum_rows(junk, ROWS);
  sum_cols(junk, ROWS);

  printf("Sum of all elements = %d\n", sum_2d(junk, ROWS));

  return 0;
}

void sum_rows(int ar[][COLS], int rows)
{
  for (int r = 0; r < rows; r++)
  {
    int tot = 0;

    for (int c = 0; c < COLS; c++)
    {
      tot += ar[r][c];
    }

    printf("Row %d: sum = %d\n", r, tot);
  }
}

void sum_cols(int ar[][COLS], int rows)
{
  for (int c = 0; c < COLS; c++)
  {
    int tot = 0;

    for (int r = 0; r < rows; r++)
    {
      tot += ar[r][c];
    }

    printf("Col %d: sum = %d\n", c, tot);
  }
}

int sum_2d(int ar[][COLS], int rows)
{
  int tot = 0;

  for (int r = 0; r < rows; r++)
  {
    for (int c = 0; c < COLS; c++)
    {
      tot += ar[r][c];
    }
  }

  return tot;
}