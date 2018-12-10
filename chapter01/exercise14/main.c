/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input. */

#include <stdio.h>
#include <stdlib.h>

#define NCHAR 26

int main(void)
{
    int c;
    int nchar[NCHAR] = {0};
    
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++nchar[c - 'a'];
        }
    }
    
    for (int i = 0; i < NCHAR; ++i) {
        putchar(i + 'a');
        
        while (nchar[i]--)
            putchar('-');
        
        putchar('\n');
    }

    return EXIT_SUCCESS;
}
