/*
    Pointer to string in a structure using malloc().
    (this version of the code lacks input cleanup for terminating '\n' character)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SLEN 81

struct namect
{
    char *first_name;
    char *last_name;
    int letters;
};

void getinfo(struct namect *);  // allocates memory
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);  // frees memory

int main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);

    return 0;
}

void getinfo(struct namect *pt)
{
    // Create a temporary array to store input
    char temp[SLEN];

    //  FIRST NAME
    printf("Please enter your first name.\n  - ");
    fgets(temp, SLEN, stdin);
    // allocate memory to hold name
    pt -> first_name = (char *) malloc((strlen(temp) + 1) * sizeof(char));  // sizeof (char) can be omitted
    // copy name to allocated memory
    strcpy(pt -> first_name, temp);

    //  LAST NAME
    printf("Please enter your last name.\n  - ");
    fgets(temp, SLEN, stdin);
    pt -> last_name = (char *) malloc(strlen(temp) + 1);
    strcpy(pt -> last_name, temp);
}

void makeinfo(struct namect *pt)
{
    pt -> letters = strlen(pt -> first_name) + strlen(pt -> last_name);
}

void showinfo(const struct namect *pt)
{
    printf("%s %s, year name contains %d letters.\n", pt->first_name, pt->last_name, pt->letters);
}

void cleanup(struct namect *pt)
{
    free(pt -> first_name); free(pt -> last_name);
}