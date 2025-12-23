#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void show_array(const int [], int);
int comp_func(const void *, const void *);

int main(void)
{
    int values[NUM] = {3, 4, 1, 6, 9, 5, 2, 7, 0, 8};

    printf("   ORIGINAL ARRAY\n");
    show_array(values, NUM);

    qsort(values, NUM, sizeof (int), comp_func);

    printf("   SORTED ARRAY\n");
    show_array(values, NUM);

    return 0;
}

void show_array(const int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", ar[i]);

        if (i == 4) putchar('\n');
    }

    putchar('\n');
}

int comp_func(const void *p1, const void *p2)
{
    // Cast the correct pointers
    const int *a1 = (const int *) p1;
    const int *a2 = (const int *) p2;

    if (*a1 < *a2) return -1;
    else if (*a1 == *a2) return 0;
    else return 1;
}