/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input. */

#include <stdio.h>
#include <stdlib.h>

// ASCII: 32 ' ' ... 126 '~'
#define NCHAR ('~' - ' ' + 1)

int main(void)
{
    int c;
    int nchar[NCHAR] = {0};
    
    while ((c = getchar()) != EOF) {
        if (c >= ' ' && c <= '~') {
            ++nchar[c - ' '];
        }
    }
    
    // Draw horizontal bars
    /*
    for (int i = 0; i < NCHAR; ++i) {
        putchar(i + 'a');
        
        while (nchar[i]--)
            putchar('-');
        
        putchar('\n');
    }
    */
    
    // Draw vertical bars
    int max = 0;
    for (int i = 0; i < NCHAR; ++i)
        if (nchar[i] > max)
            max = nchar[i];
    
    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < NCHAR; ++j)
            if (nchar[j] >= max - i)
                putchar('|');
            else
                putchar(' ');

        putchar('\n');
    }
    
    for (int i = 0; i < NCHAR; ++i)
        putchar(i + ' ');
    
    putchar('\n');
    
    return EXIT_SUCCESS;
}
