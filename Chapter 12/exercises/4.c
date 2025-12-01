#include <stdio.h>

int call_count(void);

int main(void)
{
    call_count();
    call_count();

    printf("The function has been called %d times.\n", call_count());

    return 0;
}

int call_count(void)
{
    static int number_of_calls = 0;

    return ++number_of_calls;
}