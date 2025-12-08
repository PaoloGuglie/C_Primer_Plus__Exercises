#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
#define SLEN 81

void append(FILE *, FILE *);

int main(void)
{
    // Declare variables
    FILE *f1, *f2;

    char source_file[SLEN], destination_file[SLEN];

    // Get the file names
    fputs("Enter the name of the source file.\n  - ", stdout);
    fgets(source_file, SLEN, stdin);
    source_file[strcspn(source_file, "\n")] = '\0';

    fputs("Enter the name of the destination file,\n  - ", stdout);
    fgets(destination_file, SLEN, stdin);
    destination_file[strcspn(destination_file, '\n')] = '\0';

    // Open the files
    if (!(f1 = fopen(source_file, "r")))
    {
        fprintf(stderr, "Cannot open the source file!");
        exit(EXIT_FAILURE);
    }

    if (!(f2 = fopen(destination_file, "a+")))
    {
        fprintf(stderr, "Cannot open the destination file!");
        exit(EXIT_FAILURE);
    }

    // Do the magic
    append(f1, f2);

    // Show the new destination file
    char ch;

    printf("New destination file:\n");

    rewind(f2);

    while ((ch = getc(f2)) != EOF) putc(ch, stdout);

    return 0;
}

void append(FILE *src, FILE *dest)
{
    size_t bytes;  // usually this is unsigned int
    static char temp[BUFSIZE];  // allocate once temp storage

    while ((bytes = fread(temp, sizeof (char), BUFSIZE, src)) > 0)  // fread returns the number of items successfully read
    {
        fwrite(temp, sizeof (char), bytes, dest);
    }
}