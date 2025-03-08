#include <stdio.h>

int main(void)
{
  const int secret_code = 5;
  int code_entered;

  do
  {
    printf("Toe enter the club, please enter the secret code:  - ");
    scanf("%d", &code_entered);

  } while (code_entered != secret_code);

  printf("Congratulations!\n");

  return 0;
}