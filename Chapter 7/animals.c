#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;

  printf("Give me a letter of the alphabet, and I will give ");
  printf("an animal name\n beginning with that letter.\n");
  printf("Please type in a letter; type # to end my act.\n");

  while ((ch = getchar()) != '#')
  {
    if (ch == '\n')
    {
      continue;
    }

    if (islower(ch))
    {
      switch (ch)
      {
        case 'a':
            printf("Argali, a wild sheep of Asia.\n");
            break;
        
        case 'b':
            printf("Babirusa, a wild pig of Malay.\n");
            break;

        case 'c':
            printf("Coati, racoonlike mammal.\n");
            break;

        case 'd':
            printf("Desman, aquatic, molelike critter.\n");
            break;

        case 'e':
            printf("Echidna, the spiny anteater.\n");
            break;

        case 'f':
            printf("Fisher, brownish marten.\n");
            break;

        default:
            printf("That's a stumper!\n");
      }
    }

    else
    {
      printf("I recognize only lowercase letters.\n");
    }

    // Skip the rest of the input line
    while (getchar() != '\n')
    {
      continue;
    }

    printf("Please type another letter or a #.\n");
  }

  printf("Bye!");

  return 0;
}