/*
  This program opens a file and displays it.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ch;
  FILE * fp;
  char fname[50];

  printf("Enter the name of the file: ");
  scanf("%s", fname);

  // Open the file for reading
  fp = fopen(fname, "r");

  // If attempt fails
  if (fp == NULL)
  {
    printf("Failed to open file. Bye!\n");
    exit(1);  // quit the program
  }

  // getc(fp) gets a character from the open file
  while ((ch = getc(fp)) != EOF)
  {
    putchar(ch);
  }

  // Close the file
  fclose(fp);

  return 0;
}