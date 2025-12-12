#include <stdio.h>
#include <math.h>

#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__);

int main(void)
{
    int x = 48;
    double y = sqrt(x);

    PR(1, "x = %d.\n", x);
    PR(2, "x = %d, y = %.2f.\n", x, y);

    return 0;
}