/*
    Passing a pointer to a structure as argument
*/

#include <stdio.h>

#define FUNDLEN 50

struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds *);  // The argument is a pointer to a "funds" structure

int main(void)
{
    struct funds stan =
    {
        "Chase",
        3829.56,
        "Personal savings",
        56000.00
    };

    printf("Stan has a total of $%.2f.\n", sum(&stan));

    return 0;
}

double sum(const struct funds *pt)
{
    return (pt->bankfund + pt->savefund);
}