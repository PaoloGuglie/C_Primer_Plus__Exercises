#include <stdio.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library;  // declare library as a book variable
    
    fprintf(stdout, "Please enter the book title:\n  - ");
    fgets(library.title, MAXTITL, stdin);
    library.title[strcspn(library.title, "\n")] = '\0';

    printf("Now enter the author:\n  - ");
    fgets(library.author, MAXAUTL, stdin);
    library.author[strcspn(library.author, "\n")] = '\0';

    printf("Now enter the value:\n  - ");
    scanf("%f", &library.value);

    printf("\n%s by %s: $%.2f\n", library.title, library.author, library.value);
    
    return 0;
}