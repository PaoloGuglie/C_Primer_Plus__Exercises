#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *ptd;
    int max_items = 0;
    int items = 0;

    // Create the array with a given size
    puts("What is the maximum number of type double entries?\n  - ");

    if (! scanf("%d", &max_items))
    {
        puts("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
    }

    ptd = (double *) malloc(max_items * sizeof (double));

    if (ptd == NULL)
    {
        puts("Memory allocation failed, Goodbye!");
        exit(EXIT_FAILURE);
    }

    // Populate the array
    puts("Enter the values (q to quit).\n  - ");

    while (items < max_items && scanf("%lf", &ptd[items]) == 1) items++;

    // Show the results
    printf("Here are your %d entries:", items);
    for (int j = 0; j < items; j++)
    {
        printf("\n%7.2f", ptd[j]);
    }

    puts("Done!");

    free(ptd);

    return 0;

}