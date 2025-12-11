#include <stdio.h>

int on_bits(int);

int main(void)
{
    int n;

    printf("\nTell me a number:  - ");

    while (scanf("%d", &n) == 1)
    {
        printf("\nYour number %d has %d ones in its representation.", n, on_bits(n));

        printf("\nTell me another number:  - ");
    }

    puts("Goodbye");

    return 0;
}

int on_bits(int n)
{
    int bits = 0;

    while (n)
    {
        if (n & 1) bits++;
        n >>= 1;
    }

    return bits;
}