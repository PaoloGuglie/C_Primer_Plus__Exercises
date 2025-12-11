// Create a function to convert a binary string to a numeric value

#include <stdio.h>
#include <string.h>

#define STRING1 "00010001"
#define STRING2 "11001100"
#define STRING3 "00000010"


int bin_str_to_num(char *);

int main(void)
{
    printf("\nThis is my original bit string: %s.", STRING1);
    printf("\nThis is the corresponding value: %d.", bin_str_to_num(STRING1));

    printf("\nThis is my original bit string: %s.", STRING2);
    printf("\nThis is the corresponding value: %d.", bin_str_to_num(STRING2));

    printf("\nThis is my original bit string: %s.", STRING3);
    printf("\nThis is the corresponding value: %d.\n", bin_str_to_num(STRING3));
    
    return 0;
}

int bin_str_to_num(char *str)
{
    int n = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[len - 1 - i] == '1')
        {
            n += (1 << i);
        }
    }

    return n;
}
