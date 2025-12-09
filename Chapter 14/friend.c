#include <stdio.h>

#define LEN 20

struct names
{
    char first[LEN];
    char last[LEN];
};

struct guy
{
    struct names name;
    char favorite_food[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow =
    {
        {"Ewen", "Villard"},
        "grilled salmon",
        "personality coach",
        50000.00
    };

    fprintf(stdout, "Hello, my name is %s %s.\nI like %s.\nMy job is %s and I make $%.2f/year.",
            fellow.name.first, fellow.name.last, fellow.favorite_food, fellow.job, fellow.income);

    return 0;
}