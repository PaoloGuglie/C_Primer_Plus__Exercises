#include <stdio.h>

void why_me(void);

int main()
{
    printf("The file is called ''%s''.\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);

    printf("The version is %s.\n", __VERSION__);
    printf("This is line %d in my editor.\n", __LINE__);
    printf("This function is called ''%s''.\n", __func__);

    why_me();
}

void why_me(void)
{
    printf("------------------\n");
    printf("This function is called ''%s''.\n", __func__);
    printf("This is line %d in my editor.\n", __LINE__);
}