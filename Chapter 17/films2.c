
/*
    Linked lists
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Film {
    char title[40];
    int rating;
    struct Film *next;
} Film;

int main(void)
{
    // While get input
    //{
        Film *head;  // head pointer
        Film *prev, *current;

        current = (Film *) malloc(sizeof (Film));
        
        if (head == NULL)
        {
            head = current;
        }
        else
        {
            prev->next = current;
        }

        current->next = NULL;
    //}

    prev = current;

    // Show list
    if (head == NULL)
    {
        puts("No data entered.!");
    }
    else
    {
        puts("Here's the movie list:");
    }

    current = head;

    while (current)
    {
        // print data

        current = current->next;
    }

    // Free memory

    while (head)
    {
        current = head;
        
        head = current->next;

        free(current);
    }

    return 0;
}