#include <stdio.h>

/*
    This program writes the raw binary representation of the
    integer 5 on stdout.
*/

int main(void)
{
    FILE *file = fopen("number.dat", "wb");

    int n = 5;

    fwrite(&n, sizeof (int), 1, file);
    
    fclose(file);

    return 0;
}