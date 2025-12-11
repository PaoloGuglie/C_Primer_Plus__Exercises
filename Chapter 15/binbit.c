#include <stdio.h>
#include <limits.h>

char *int_to_bits(short, char *);

int main(void)
{
    char str[CHAR_BIT * sizeof(int) +1];
    short number;

    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates the program");

    while (scanf("%hu", &number) == 1)
    {
        int_to_bits(number, str);
        puts(str);
        putchar('\n');
    }

    return 0;
}

char *int_to_bits(short n, char *pt)
{
    const static short size = CHAR_BIT * sizeof (short);  // CHAR_BIT is the number of bits in char.
                                                      // sizeof works in terms of char, so this is the number of bits in an int.
    for (int i = size - 1; i >= 0; i--, n >>= 1)
    {
        pt[i] = (0x1 & n) + '0';  // assume ASCII or similar. This evaluates the final bit in n.
    }

    pt[size] = '\0';

    return pt;
}