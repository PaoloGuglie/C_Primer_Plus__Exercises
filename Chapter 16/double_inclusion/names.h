#ifndef NAMES_H_

    #define NAMES_H_  // declare the filename to the program to avoid future accidental inclusions

    #define SLEN 32

    struct names_struct
    {
        char first[SLEN];
        char last[SLEN];
    };

    typedef struct names_struct names;

#endif