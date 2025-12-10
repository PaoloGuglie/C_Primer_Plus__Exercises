#include <stdio.h>
#include <ctype.h>

#define LEN 81

void show_upper(int (*pt)(int), const char *);

void print_string(char *);

int main(void)
{
    char *st = "Hello, my friends!";

    void (*pt)(char *);  // pt points to a function having a char * argument
    pt = print_string;   // and no return value

    printf("The original string: ");
    pt(st);

    show_upper(toupper, st);

    return 0;
}

void show_upper(int (*pt)(int), const char *str)
{
    char ch;

    printf("The upper string: ");

    while (*str)
    {
        ch = (char) pt((unsigned char) *str);  // can sintetize with putchar( pt( (unsigned char) *str++ ) );
        putchar(ch);
        str++;
    };

    printf(".\n");
}

void print_string(char *str)
{
    printf("%s\n", str);
}