#include <stdio.h>

extern int count;  // reference declaration, external linkage

static int total = 0;  // static definition, internal linkage

void accumulate(int k)
{
    static int subtotal = 0;

    if (k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;  // reset
    }
    else
    {
        subtotal += k;
        total += k;
    }
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}