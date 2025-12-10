#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 30

enum spectrum {red, orange, yellow, green, blue, violet};

const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

int main(void)
{
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    printf("Enter a color (empty line to quit).\n  - ");

    while (fgets(choice, LEN, stdin) && choice[0] != '\n')
    {
        choice[strcspn(choice, "\n")] = '\0';  // strip the newline character from the input

        for (color = red; color <= violet; color++)
        {
            if (!strcmp(choice, colors[color]))  // if they are the same string
            {
                color_is_found = true;
                break;
            }
        }

        if (color_is_found)
        {
            switch (color)  // switch needs an integer type to work, so "enum" is useful here
            {
                case red:
                    puts("Roses are red.");
                    break;

                case orange:
                    puts("Poppies are orange");
                    break;

                case yellow:
                    puts("Sunflowers are yellow");
                    break;

                case green:
                    puts("Grass is green.");
                    break;

                case blue:
                    puts("Bluebells are blue.");
                    break;

                case violet:
                    puts("Violets are violet.");
                    break;
            }
        }
        else
        {
            printf("I don't know about the color '%s'.\n", choice);
        }
        
        color_is_found = false;

        printf("\nNext color, please.\n  - ");
    }

    return 0;
}