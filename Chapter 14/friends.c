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
    struct guy person[2] =
    {
        {
            {"Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            50000.00
        },
        {
            {"Rodney", "Swillbelly"},
            "triple",
            "tabloid editor",
            120000.50
        }
    };

    struct guy *him;  // Pointer to a structure

    for (int i = 0; i < 2; i++)
    {
        him = &person[i];  // Chose a "guy" structure's address to point to

        fprintf(stdout, "Hello, my name is %s %s.\nI like %s.\nMy job is %s and I make $%.2f/year.\n\n",
            him->name.first, him->name.last, him->favorite_food, (*him).job, (*him).income);
    }

    return 0;
}