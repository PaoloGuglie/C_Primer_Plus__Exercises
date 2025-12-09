#include <stdio.h>
#include <stdlib.h>

struct flex
{
    double average;
    double scores[];  // flexible array member
};

int SEED;

void show_flex(const struct flex *);

int main(void)
{
    int tot = 0;
    struct flex *pt;

    printf("Tell me a number:  - ");
    scanf("%d", &SEED);

    pt = malloc(sizeof (struct flex) + 5 * sizeof(double));

    for (int i = 0; i < 5; i++)
    {
        pt->scores[i] = SEED - (i * 2);
        tot += pt->scores[i];
    }

    pt->average = tot / 5;

    show_flex(pt);

    return 0;
}

void show_flex(const struct flex *pt)
{
    printf("Scores: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%g ", pt->scores[i]);
    }

    printf("\nAverage: %g\n", pt->average);
}