#include <stdio.h>
#include "partb.h"

int count;  // file scope, external linkage (automatically set to 0)

int main(void)
{
    int value;

    printf("Enter a positive interger (0 to quit).\n  - ");

    while (scanf("%d", &value) && value > 0)
    {
        ++count;  // use file scope variable

        for (register int i = value; i >= 0; i--) accumulate(i);

        printf("Enter a positive integer (0 to quit).\n  - ");
    }

    report_count();

    return 0;
}