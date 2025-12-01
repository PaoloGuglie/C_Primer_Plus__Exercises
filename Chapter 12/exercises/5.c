#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float *generate_numbers(float *);

void display_numbers(float n[]);

int main(void)
{
    srand( (unsigned) time(NULL) );  // change the seed

    float *nums;
    nums = (float *) calloc(100, sizeof(float));

    nums = generate_numbers(nums);

    display_numbers(nums);

    free(nums);

    return 0;
}

float *generate_numbers(float *num_list)
{
    for (int i = 0; i < 100; i++)
    {
        float n = 1.0f + ((float)rand() / (float)RAND_MAX) * 9.0f;

        int x = i - 1;
        while (x >= 0 && num_list[x] > n)
        {
            num_list[x + 1] = num_list[x];
            x--;
        }
        num_list[x + 1] = n;
    }

    return num_list;
}

void display_numbers(float num_list[])
{
    for (int i = 0; i < 100; i++)
    {
        printf("\n %f", num_list[i]);
    }
}