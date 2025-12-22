#include <stdio.h>
#include <stdarg.h>

double sum(int, ...);

int main(void)
{
    double s = sum(3, 2.2, 1.1, 3.1);

    printf("Total is %.2f.\n", s);

    return 0;
}

double sum(int lim, ...)
{
    va_list ap;  // declare object to hold arguments

    double tot = 0;

    va_start(ap, lim);  // initialize ap to argument list

    for (int i = 0; i < lim; i++)
    {
        tot += va_arg(ap, double);  // access each item in argument list
    }

    va_end(ap);  // clean up

    return tot;
}